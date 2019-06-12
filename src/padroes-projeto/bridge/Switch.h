/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _SWITCH_H_
#define _SWITCH_H_

#include <iostream>

using namespace std;

class Switch {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    Switch(Device* backend)
    {
        device = backend;
    }
protected:
    Device* device;
};

#endif
