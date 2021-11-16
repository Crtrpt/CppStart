//
// Created by Admin on 2021/10/29.
//

#ifndef C14_BASE_H
#define C14_BASE_H
#include <iostream>
#include <cstring>
using std::string;

class BASE {
private:
    string version;
public:
    virtual string getVersion()= 0;
};


#endif //C14_SERVER_H
