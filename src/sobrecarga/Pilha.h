/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */
 
#ifndef _PILHA_H_
#define _PILHA_H_

#include <string>
#include <iostream>
#include <exception>

using namespace std;

class PilhaCheiaException: public exception{
public:
	virtual const char* what(){
		return "Foi impossivel realizar a operacao pois a pilha esta cheia!";
	}
};

class PilhaVaziaException: public exception{
public:
	virtual const char* what(){
		return "Foi impossivel realizar a operacao pois a pilha esta vazia!";
	}	
};

class StringVaziaException: public exception{
public:
	virtual const char* what(){
		return "Eh impossivel empilhar valor vazio!";
	}	
};

class Pilha{
public:
	//construtores
	Pilha(int tamanho = 100) : _tamanho(tamanho), _ultimoItem(0), _topo(NULL) {
		cout << "Pilha()" << endl;
		_vetPilha = new string[tamanho+1];
	}
	
	//destrutores
	~Pilha(){
		cout << "~Pilha()" << endl;
	}
	
	//metodos
	void empilha(string item){
		if(item == ""){
			throw StringVaziaException();
		}
		if (_ultimoItem < _tamanho) {
			_vetPilha[_ultimoItem] = item;
			_noh* novo = new _noh;
		   	novo->_item = item;
		   	novo->_ponta = _topo;
		   	_topo = novo;
		   	_ultimoItem++;
		}else{
			throw PilhaCheiaException();
		}
	}
	string desempilha(){
		if (_topo != NULL) {
			_noh* aux = new _noh;
			aux = _topo;
			_topo = _topo->_ponta;
			string removido = (aux->_item);
			delete aux;
			_ultimoItem--;
			return removido;
		}else{
			throw PilhaVaziaException();
		}
	}
	int tamanho(){
		return _ultimoItem;
	}
	void imprime(){
		if (_topo != NULL)
		{
		   _noh* aux= new _noh;
		   aux = _topo;
		   int contador = _ultimoItem;
		   cout << "#=======#PILHA#=======#" << endl;
		   while (aux != NULL)
		   {
			 cout << "Item "<< contador-- << ": " << aux->_item << endl;
			 aux = (aux->_ponta);
			 cout << endl;
		   }
		   cout << "#=====#END#PILHA#=====#"<< endl;
		}else{
			cout << "Pilha Vazia!!"<< endl;
		}
	}
	
	//sobrecarga de operadores
	void operator +=(string item){
		this->empilha(item);
	}
	string operator --(){
		return this->desempilha();
	}
	
	//friends
	friend istream& operator>>(istream &is, Pilha &pilha);
	friend ostream& operator<<(ostream &os, Pilha &pilha);
	
private:
	struct _noh {
		string _item;
		_noh* _ponta;
	};	
	int _tamanho;
	int _ultimoItem;
	_noh* _topo;
	string* _vetPilha;
};

inline istream& operator>>(istream &is, Pilha &pilha) {
	string item = "";
	while (pilha._ultimoItem != pilha._tamanho && item != "%") {
		cout << "Digite um valor para empilhar ou % para sair: " << endl;
		is >> item;
		if(item != "%") {
			pilha.empilha(item);	
		}
	}
	return is;
}

inline ostream& operator<<(ostream &os, Pilha &pilha) {
	if (pilha._topo != NULL)
	{
		os << "#=======#PILHA#=======#" << endl;
		
		for(int i = pilha._ultimoItem; i >= 0; i--){
			if( pilha._vetPilha[i] != "" &&  pilha._vetPilha[i] != "\0")
				os << "Item " << i << ": " << pilha._vetPilha[i] << endl;
		}
		
		os << "#=====#END#PILHA#=====#"<< endl;
	}else{
		os << "Pilha Vazia!!"<< endl;
	}
	return os;
}

#endif
