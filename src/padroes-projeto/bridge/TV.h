/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _TV_H_
#define _TV_H_

#include <string>
#include "Device.h"

using namespace std;

class TV : public Device {
public:
    TV(string name = "TV")
    {
        _name = name;
    }
    void run()
    {
        cout << _name <<" is Switch-On" << endl;
    }
    void off()
    {
        cout << _name <<" is Switch-Off" << endl;
    }
private:
    string _name;
 };  

#endif
