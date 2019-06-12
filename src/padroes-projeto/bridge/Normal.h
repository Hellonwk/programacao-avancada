/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _NORMAL_H_
#define _NORMAL_H_

#include "Switch.h"

using namespace std;

class Normal : public Switch {
public:
        Normal(Device* i):Switch(i)
        {
        }
         
        void turnOn()
        {
            cout << "Using Normal  ";
            device->run();
        }
        void turnOff()
        {
            cout << "Using Normal  ";
            device->off();
        }
};

#endif
