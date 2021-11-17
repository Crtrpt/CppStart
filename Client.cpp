//
// Created by Admin on 2021/10/29.
//
#include <iostream>
#include "Client.h"
#include "Windows.h"

#include <iostream>
using namespace std;

BOOL WINAPI DllMain(
        HINSTANCE hinstDLL,  // handle to DLL module
        DWORD fdwReason,     // reason for calling function
        LPVOID lpReserved )  // reserved
{

    // Perform actions based on the reason for calling.
    switch( fdwReason )
    {
        case DLL_PROCESS_ATTACH:
            // Initialize once for each new process.
            // Return FALSE to fail DLL load.
            std::cout<<"load dll attach"<<std::endl;
            break;

        case DLL_THREAD_ATTACH:
            // Do thread-specific initialization.
            break;

        case DLL_THREAD_DETACH:

            // Do thread-specific cleanup.
            break;

        case DLL_PROCESS_DETACH:
            std::cout<<"load dll detach"<<std::endl;
            // Perform any necessary cleanup.
            break;
    }
    return TRUE;
}

using std::string;

string Client::getName() {
    return this->name;
}

Client::Client() {
    this->name = "init client";
    this->age = 20;
}

Client::~Client() {
    cout << "distory client" <<endl;
}

int Client::getAge() const {
    return this->age;
}

string Client::getVersion() {
    return "Client v0.0.1";
}
