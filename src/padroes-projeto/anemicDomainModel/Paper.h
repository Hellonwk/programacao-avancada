/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _PAPER_H_
#define _PAPER_H_

#include <iostream>
#include <string>

using namespace std;

class Paper {
public:
	Paper(int quantity = 100) : _quantity(quantity), _date("29/12/17"), _unitPriceOfPaper(0.50) {
		//cout << "Paper()" << endl;
	}
	~Paper(){
		//cout << "~Paper()" << endl;
	}
	int _quantity;
	string _date;
    float _unitPriceOfPaper;
};

#endif
