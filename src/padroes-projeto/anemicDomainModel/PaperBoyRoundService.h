#ifndef _PAPER_BOY_ROUND_SERVICE_H_
#define _PAPER_BOY_ROUND_SERVICE_H_

#include <iostream>

/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include "Wallet.h"
#include "Paper.h"
#include "Customer.h"
#include "PaperBoy.h"

using namespace std;

class PaperBoyRoundService {
public:
	PaperBoyRoundService() {
		//cout << "PaperBoyRoundService()" << endl;
	}
	~PaperBoyRoundService(){
		//cout << "~PaperBoyRoundService()" << endl;
	}
    void deliverPapers(PaperBoy paperBoy, Customer customer) {
        deliverPaper(paperBoy, customer);
    }
private:
    void deliverPaper(PaperBoy paperBoy, Customer customer) {
       float priceOfPaper = paperBoy._papers._unitPriceOfPaper * paperBoy._papers._quantity;
       if (customer._wallet._money >= priceOfPaper && paperBoy._papers._quantity != 0) {
       	   	cout << "The customer have: " << customer._paper._quantity << " papers and $" << customer._wallet._money<< endl;
       		cout << "The paper boy have: " << paperBoy._papers._quantity << " papers and $" << paperBoy._wallet._money << endl;
			paperBoy._papers._quantity = 0;             
			customer._wallet._money -= priceOfPaper;
			paperBoy._wallet._money += priceOfPaper;
           	cout << "The paper boy sold all paper to the customer" << endl;  
			cout << "Now the customer have: " << customer._paper._quantity << " papers and $" << customer._wallet._money << endl;
       		cout << "And the paper boy have: " << paperBoy._papers._quantity << " papers and $" << paperBoy._wallet._money<< endl;    
       }else{
       		cout << "The customer must have some money and the paper boy must have papers!" << endl;
	   }
    }
};

#endif
