//
// Created by Admin on 2021/10/29.
//
#include <iostream>
#include "Client.h"

using std::string;

string Client::getName() {
    return this->name;
}

Client::Client() {
    this->name = "test client";
    this->age = 20;
}

int Client::getAge() const {
    return this->age;
}
