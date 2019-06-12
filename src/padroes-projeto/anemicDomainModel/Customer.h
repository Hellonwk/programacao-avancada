/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include <iostream>
#include <string>

#include "Wallet.h"
#include "Paper.h"

using namespace std;

class Customer {
public:
	Customer(string address = "Rua Abacate Verde") : _address(address) {
		//cout << "Customer()" << endl;
	}
	~Customer(){
		//cout << "~Customer()" << endl;
	}
	Wallet _wallet;
	Paper _paper;
	string _address;
};

#endif
