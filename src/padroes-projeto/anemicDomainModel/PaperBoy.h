/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _PAPER_BOY_H_
#define _PAPER_BOY_H_

#include <iostream>

#include "Wallet.h"
#include "Paper.h"

using namespace std;

class PaperBoy {
public:
	PaperBoy() {
		//cout << "PaperBoy()" << endl;
	}
	~PaperBoy(){
		//cout << "~PaperBoy()" << endl;
	}
	Wallet _wallet;
	Paper _papers;
};

#endif
