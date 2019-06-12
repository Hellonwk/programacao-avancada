/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include <iostream>
#include <string>

#include "Tv.h"
#include "Radio.h"

#include "RemoteControl.h"
#include "Normal.h"

using namespace std;

int main()
{
        Switch* switch1;

        Device* tv = new TV("TV");
        Device* radio = new Radio("Radio");

        switch1 = new RemoteControl(tv);
        switch1->turnOn();

        switch1 = new RemoteControl(radio);
        switch1->turnOn();

        switch1 = new Normal(tv);
        switch1->turnOff();

        switch1 = new Normal(radio);
        switch1->turnOff();

return 0;
}
