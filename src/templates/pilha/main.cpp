/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include <string>
#include <iostream>

#include "PilhaTemplate.h"

using namespace std;

void pilhaInt(){
	cout << "\n#=====#PILHA<INT>#=====#\n" << endl;
	try{
		Pilha<int> pilha;	//cria pilha<int> com tamanho default 100
		cout << pilha << endl;
		pilha+=(0);
		pilha+=(1092);
		pilha+=(1223);	
		pilha+=(1000);
		pilha+=(234894387);
		pilha+=(355);	
		cout << pilha << endl;
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	cout << "\n#========#FIM#========#" << endl;	
}

void pilhaString(){
	cout << "\n#=====##PILHA<STRING>#=====#\n" << endl;
	try{
		Pilha<string> pilha;	//cria pilha<string> com tamanho default 100
		cout << pilha << endl;
		pilha+=("Artes");
		pilha+=("Bilbo");
		pilha+=("Camelo");	
		cout << pilha << endl;
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	cout << "\n#===========#FIM#===========#" << endl;	
}

void funcoes_amigas_pilhaDouble() {
	cout << "\n#=====#FUNCAO AMIGA - PILHA<DOUBLE>#=====#\n" << endl;
	try{
		Pilha<double> pilha(4);			//cria pilha com tamanho para 4 itens (0 - 3)
		cout << pilha << endl;
		cin >> pilha;
		cout << pilha << endl; 
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	cout << "\n#=====#FIM FUNCAO AMIGA - PILHA<DOUBLE>#=====#" << endl;		
}
int main(int argc, char** argv) {
	pilhaInt();
	pilhaString();
	funcoes_amigas_pilhaDouble();
	
	return 0;
}
