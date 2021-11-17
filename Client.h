//
// Created by Admin on 2021/10/29.
//

#ifndef C14_CLIENT_H
#define C14_CLIENT_H

#include <iostream>
#include <cstring>
#include "Base.h"

using std::string;

class Client:BASE {
private:
    string name;
    int age;
public:
    __declspec(dllexport) Client();

    __declspec(dllexport) ~Client();

    __declspec(dllexport) string getName();

    __declspec(dllexport) int getAge() const;

    string  getVersion();
};


#endif //C14_SERVER_H
