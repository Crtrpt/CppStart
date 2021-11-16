#include <iostream>
#include "Server.h"
#include "Client.h"
#include "log.h"
using namespace std;

extern "C" int foo(int num, int power);

extern "C" int addition(int, int);

int power2( int num, int power );

int main() {
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
