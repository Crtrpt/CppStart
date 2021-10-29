//
// Created by Admin on 2021/10/29.
//

#ifndef C14_SERVER_H
#define C14_SERVER_H
#include <iostream>
#include <cstring>
using std::string;

class Server {
private:
    string name;
    int age;
public:
    Server();
    string getName();
    int getAge() const;
};


#endif //C14_SERVER_H
