#include <iostream>
#include "Server.h"


int main() {
    auto *u= new Server();
    std::cout << u->getName() << std::endl;
    std::cout << u->getAge() << std::endl;
    return 0;
}
