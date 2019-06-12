/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include <iostream>

#include "Wallet.h"
#include "Paper.h"
#include "Customer.h"
#include "PaperBoy.h"
#include "PaperBoyRoundService.h"

int main() {
	Wallet customerWallet(100);
	Wallet paperBoyWallet(10);

	Paper paper(50);
	
	PaperBoy paperBoy;
	paperBoy._wallet = paperBoyWallet;
	paperBoy._papers = paper; 	
	
	Customer customer;
	customer._wallet = customerWallet;
	
	PaperBoyRoundService paperBoyService;
	
	paperBoyService.deliverPapers(paperBoy, customer);
	
	return 0;
}
