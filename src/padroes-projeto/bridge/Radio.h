/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _RADIO_H_
#define _RADIO_H_

#include "Device.h"
#include <string.h>

using namespace std;

class Radio : public Device {
public:
    Radio(string _name)
    {
        name = _name;
    }
    void run()
    {
        cout << name <<" is Switch-On" << endl;
    }
    void off()
    {
        cout << name <<" is Switch-Off" << endl;
    }
private:
	string name;
};  
 
#endif
