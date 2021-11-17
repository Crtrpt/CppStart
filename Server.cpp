//
// Created by Admin on 2021/10/29.
//
#include <iostream>
#include "Server.h"



using std::string;

string Server::getName() {
    return this->name;
}

Server::Server() {

    this->name = "test Server";
    this->age = 20;
}

int Server::getAge() const {
    return this->age;
}

string Server::getVersion() {
    return "Server v0.0.1";
}
