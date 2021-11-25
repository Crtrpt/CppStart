//
// Created by Admin on 2021/11/19.
//

#include "Ev.h"
#include "log.h"
#include <iostream>
using namespace std;

void Ev::start() {

}

void Ev::stop() {

}

void Ev::off(int eventName) {

}

void Ev::fire(int eventName) {
    void *callback=this->eventStart[eventName];

    ((void(*)())callback)();

//    __asm
//    {
//        call callback
//    }
}

void Ev::init(int len) {
    LOG_INFO("init ev");

}

int Ev::registerName(char *name) {
    return 0;
}

void Ev::on(int eventName, void *p) {
    LOG_INFO("ev on");
    cout<<p<<endl;
    this->eventStart[eventName]=p;
}
