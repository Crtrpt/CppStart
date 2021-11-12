#include <iostream>
#include "Server.h"
#include "Client.h"

int main() {
    auto *u= new Server();
    std::cout << u->getName() << std::endl;
    std::cout << u->getAge() << std::endl;

    auto *c= new Client();
    std::cout << c->getName() << std::endl;
    std::cout << c->getAge() << std::endl;
    return 0;
}
