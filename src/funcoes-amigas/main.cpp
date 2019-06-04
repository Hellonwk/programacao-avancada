/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include <iostream>

#include "Pilha.h"

using namespace std;

/* SOBRECARGA DE OPERADORES - ATIVIDADE 01
 * Cria uma pilha com tamanho suficiente para 10 itens
 * Testa todos os metodos da Pilha, sem cometer erros
 * pilha.empilha(item), pilha.desempilha(), pilha.imprime(), pilha.tamanho()
*/
void sobrecarga_operadores_atividade01(){
	cout << "\n#=====#SOBRECARGA DE OPERADORES - ATIVIDADE 01#=====#\n" << endl;
	try{
		Pilha pilha(10); 			//cria pilha com tamanho para 10 itens (0 - 9)
		pilha.imprime();			//pilha vazia
		pilha.empilha("Abelha");	//item 0
		pilha.empilha("Besouro"); 	//item 1
		pilha.empilha("Cachorro"); 	//item 2
		pilha.empilha("Dragao"); 	//item 3
		pilha.empilha("Elefante");	//item 4
		pilha.empilha("Formiga");	//item 5
		pilha.empilha("Gato");		//item 6
		pilha.empilha("Hipopotamo");//item 7	
		pilha.empilha("Inhame");	//item 8
		pilha.empilha("Jacare");	//item 9
		pilha.imprime();
		cout << "Desempilha: " << pilha.desempilha() << endl; //desempilha o item 9: Jacare
		cout << "Tamanho atual da pilha: " << pilha.tamanho() << endl; //tamanho atual = 9
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	catch(StringVaziaException &ex){
		cout << ex.what() << endl;
	}
	catch(exception &ex){
		cout << "Erro nao identificado!!" << endl;
	}	
	cout << "\n#=====#FIM SOBRECARGA DE OPERADORES - ATIVIDADE 01#=====#" << endl;		
}

/* SOBRECARGA DE OPERADORES - ATIVIDADE 02
 * Cria uma pilha default (100 itens)
 * Testa os metodos que usam sobrecarga de operadores, sem cometer erros
 * pilha.empilha(item) <=> pilha+=item
 * pilha.desempilha()  <=> --pilha
*/
void sobrecarga_operadores_atividade02(){
	cout << "\n#=====#SOBRECARGA DE OPERADORES - ATIVIDADE 02#=====#\n" << endl;	
	try{
		Pilha pilha;		//cria pilha com tamanho default 100
		pilha.imprime();	//pilha vazia
		pilha+=("Artes"); 	//empilha com operador +=
		pilha+=("Bilbo"); 	//empilha com operador +=
		pilha+=("Camelo"); 	//empilha com operador +=
		pilha.imprime();	//item 0: Artes, item 1: Bilbo, item 2: Camelo
		--pilha; 			//desempilha com operador --
		pilha.imprime();	//item 0: Artes, item 1: Bilbo	
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	catch(StringVaziaException &ex){
		cout << ex.what() << endl;
	}
	catch(exception &ex){
		cout << "Erro nao identificado!!" << endl;
	}
	cout << "\n#=====#FIM SOBRECARGA DE OPERADORES - ATIVIDADE 02#=====#" << endl;
}

/* FUNCOES AMIGAS - ATIVIDADE 01
 * Cria uma pilha default (100 itens)
 * Testa o friend de cin >> pilha que chama o empilha ate encher a pilha ou ate o usuario digitar o caracter %
 * Testa o friend de cout << pilha que substitui o pilha.imprime()
*/
void funcoes_amigas_atividade01(){
	cout << "\n#=====#FUNCOES AMIGAS - ATIVIDADE 01#=====#\n" << endl;
	try{
		Pilha pilha(4);			//cria pilha com tamanho para 4 itens (0 - 3)
		cout << pilha << endl;
		cin >> pilha;			//chama o empilha ateh o usuario desejar parar ou ate acabar o tamanho da pilha
		cout << pilha << endl; 	//substitui o imprime();
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	catch(StringVaziaException &ex){
		cout << ex.what() << endl;
	}	
	cout << "\n#=====#FIM FUNCOES AMIGAS - ATIVIDADE 01#=====#" << endl;		
}

/* EXCECOES - ATIVIDADE 01
 * Cria uma pilha com tamanho suficiente para 4 itens
 * Testa todos os metodos da Pilha cometendo erros para chamar as excecoes 
*/
void excecoes_atividade01(){
	cout << "\n#=====#EXCECOES - ATIVIDADE 01#=====#\n" << endl;
	try{
		Pilha pilha(4);			//cria pilha com tamanho para 4 itens (0 - 3)
		cout << pilha << endl;
		--pilha;				//cai no catch(PilhaVaziaException)
		pilha+=("Artes");		//item 0
		pilha+=("Bilbo");		//item 1
		pilha+=("Camelo");		//item 2
		pilha+=("Cachorro");	//item 3
		//pilha+=(""); 			//cai no catch(StringVaziaException)
		//pilha+=("Estourou");	//cai no catch(PilhaCheiaException)
		cout << pilha << endl; 
	}catch(PilhaCheiaException &ex){
		cout << ex.what() << endl;
	}
	catch(PilhaVaziaException &ex){
		cout << ex.what() << endl;
	}
	catch(StringVaziaException &ex){
		cout << ex.what() << endl;
	}	
	cout << "\n#=====#FIM EXCECOES - ATIVIDADE 01#=====#" << endl;	
}

int main() {
	//sobrecarga_operadores_atividade01();
	//sobrecarga_operadores_atividade02();
	//funcoes_amigas_atividade01();
	//excecoes_atividade01();
	return 0;
}
