#include <iostream>
#include "Server.h"
#include "Client.h"
#include "log.h"
#include <csignal>
#include <typeinfo>



using namespace std;

extern "C" int foo(int num, int power);

extern "C" int addition(int, int);

int power2( int num, int power );

extern "C" {
    struct js;                 // JS engine (opaque)
    typedef uint64_t jsval_t;  // JS value placeholder

    struct js *js_create(void *buf, size_t len);          // Create JS instance
    const char *js_str(struct js *, jsval_t val);         // Stringify JS value
    jsval_t js_eval(struct js *, const char *, size_t);   // Execute JS code
    jsval_t js_glob(struct js *);                         // Return global object
    jsval_t js_mkobj(struct js *);                        // Create a new object
    jsval_t js_mkstr(struct js *, const void *, size_t);  // Create a string
    jsval_t js_mknum(struct js *, double);                // Create a number
    jsval_t js_import(struct js *, uintptr_t, const char *);   // Import native func
    void js_set(struct js *, jsval_t, const char *, jsval_t);  // Set obj attribute
    int js_usage(struct js *);                                 // Return mem usage
}


template <typename T>
inline T const& Max (T const& a, T const& b)
{
    const std::type_info &t=  typeid(a);

    cout<< t.name()<< endl;
    return a;
//    return a < b ? b:a;
}

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序

    exit(signum);
}

int main() {
    signal(SIGINT, signalHandler);
    cout<< Max(1,2)<< std::endl;
    char mem[200];
    struct js *js = js_create(mem, sizeof(mem));  // Create JS instance
    jsval_t v = js_eval(js, "1 + 2 * 3", ~0);     // Execute JS code
    printf("elk result: %s\n", js_str(js, v));        // result: 7


    std::cout << "call RUST"<<addition(1,2) << std::endl;

    std::cout <<  foo(2, 2) << std::endl;
    std::cout << power2(2,2) << std::endl;
    LOG_INFO("xxxx");
    auto *u= new Server();
    std::cout << u->getName() << std::endl;
    std::cout << u->getAge() << std::endl;
    std::cout << u->getVersion() << std::endl;

    auto *c= new Client();
    std::cout << c->getName() << std::endl;
    std::cout << c->getAge() << std::endl;
    std::cout << c->getVersion() << std::endl;

    delete c;
    while (true){

    }
    return 0;
}

int power2( int num, int power )
{
    __asm
    {
    mov eax,  num   ; Get first argument
    mov ecx, power  ; Get second argument
    shl eax, cl     ; EAX = EAX * ( 2 to the power of CL )
    }
    // Return with result in EAX
}
