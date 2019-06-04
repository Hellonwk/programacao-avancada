/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _PILHA_TEMPLATE_H_
#define _PILHA_TEMPLATE_H_

#include <string>
#include <iostream>
#include <exception>

using namespace std;

template<typename T> class Pilha;
template<typename T> ostream &operator<< (ostream &os, Pilha<T> &pilha);
template<typename T> istream &operator>> (istream &is, Pilha<T> &pilha);

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

template <typename T>
class Pilha{
public:
	//construtores
	Pilha(int tamanho = 100) : _tamanho(tamanho), _ultimoItem(0), _topo(NULL) {
		cout << "Pilha()" << endl;
		_vetPilha = new T[tamanho+1];
	}
	
	//destrutores
	~Pilha(){
		cout << "~Pilha()" << endl;
	}
	
	//metodos
	void empilha(T item){
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
	T desempilha(){
		if (_topo != NULL) {
			_noh* aux = new _noh;
			aux = _topo;
			_topo = _topo->_ponta;
			T removido = (aux->_item);
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
	void operator +=(T item){
		this->empilha(item);
	}
	string operator --(){
		return this->desempilha();
	}
	
	//friends
	friend istream& operator >> <> (istream &is, Pilha<T> &pilha);
	friend ostream& operator << <> (ostream &os, Pilha<T> &pilha);
	
private:
	struct _noh {
		T _item;
		_noh* _ponta;
	};	
	int _tamanho;
	int _ultimoItem;
	_noh* _topo;
	T* _vetPilha;
};
template<typename T>
istream& operator>>(istream &is, Pilha<T> &pilha) {
	T item;
	while (pilha._ultimoItem != pilha._tamanho) {
		cout << "Digite um valor para empilhar: " << endl;
		is >> item;
		pilha.empilha(item);	

	}
	return is;
}
template<typename T>
ostream& operator<<(ostream &os, Pilha<T> &pilha) {
	if (pilha._topo != NULL)
	{
		os << "#=======#PILHA#=======#" << endl;
		
		for(int i = pilha._ultimoItem -1; i >= 0; i--){
			os << "Item " << i << ": " << pilha._vetPilha[i] << endl;
		}
		
		os << "#=====#END#PILHA#=====#"<< endl;
	}else{
		os << "Pilha Vazia!!"<< endl;
	}
	return os;
}

#endif
