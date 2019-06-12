/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _REMOTE_CONTROL_H_
#define _REMOTE_CONTROL_H_

#include "Switch.h"

using namespace std;

class RemoteControl : public Switch { 
public:
    RemoteControl(Device* i) : Switch(i)
    {
    }
         
    void turnOn()
    {
        cout << "Using Remote ";
        device->run();
    }
    void turnOff()
    {
        cout << "Using Remote ";
        device->off();
    }
};

#endif
