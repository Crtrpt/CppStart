//
// Created by Admin on 2021/10/29.
//

#ifndef C14_SERVER_H
#define C14_SERVER_H
#include <iostream>
#include <cstring>
#include "Base.h"
using std::string;

class Server:BASE {
private:
    string name;
    int age;
public:
    Server();
    string getName();
    int getAge() const;
    string  getVersion() override;
};


#endif //C14_SERVER_H
