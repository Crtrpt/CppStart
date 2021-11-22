//
// Created by Admin on 2021/11/19.
//

#ifndef CPPSTART_EV_H
#define CPPSTART_EV_H


class Ev {
    void *eventStart[100];

    // {nameIndex,eventcallback start}
public:
    void init(int len);
    void start();
    void stop();
    int  registerName(char name[]);
    void on(int eventName,
            void *p
    );
    void off(int eventName);
    void fire(int eventName);
};


#endif //CPPSTART_EV_H
