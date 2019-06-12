/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _WALLET_H_
#define _WALLET_H_

#include <iostream>

using namespace std;

class Wallet {
public:
	Wallet(float money = 100) : _money(money) {
		//cout << "Wallet()" << endl;
	}
	~Wallet(){
		//cout << "~Wallet()" << endl;
	}
	float getMoney() {
	   return _money;
	}
	void setMoney(float money) {
	   this->_money = money;
	}
    float _money;
}; 

#endif
