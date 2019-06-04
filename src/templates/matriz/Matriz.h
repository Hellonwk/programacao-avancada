/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#ifndef _MATRIZ_H_
#define _MATRIZ_H_

#include <iostream>
#include <exception>

using namespace std;

class DimensaoMatrizInvalidaException : public exception{
public:
	virtual const char* what(){
		return "Foi impossivel realizar a operacao pois a dimensao da matriz eh invalida!";
	}
};

template<typename T, int linhas, int colunas> class Matriz;
template<typename T, int linhas, int colunas> ostream &operator<< (ostream &os, Matriz<T, linhas, colunas> &matriz);
template<typename T, int linhas, int colunas> istream &operator>> (ostream &is, Matriz<T, linhas, colunas> &matriz);
 
template<typename T, int linhas, int colunas> 
class Matriz {
public:
	//construtores
	Matriz() : _linha(linhas), _coluna(colunas) {
 		_matriz = new T*[linhas];
    	for(int i = 0; i < linhas; i++){
       		_matriz[i] = new T[colunas];
		}
		for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                _matriz[i][j] = 0; 
        	}
		}
		cout << "Matriz()" << endl;
    }
    
    Matriz(T **matriz) : _linha(linhas), _coluna(colunas) {
    	for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                _matriz[i][j] = matriz[i][j]; 
        	}
		}
		cout << "Matriz(**matriz)" << endl;
	}
    	
    //destrutores
	virtual ~Matriz(){
		cout << "~Matriz()" << endl;
	}
	
	//metodos
	void insereValor(int i, int j, T valor){
		_matriz[i][j] = valor;      
	}
	
	void insereValores(){
		T valor;
		for (int i = 0; i < linhas; i++) {
		      for (int j = 0; j < colunas; j++) {
           		cout << "Digite um valor na posicao matriz[" << i << "][" << j << "] : ";
				cin >> valor;
				this->insereValor(i, j, valor); 
        	} 
    	}
	}
	
	void imprime(){
		int x = 0;
		cout << " #";
		while(x < colunas*3){
			cout << "=";
			x++;
		}
		x =0;
		cout << " INI MATRIZ ";
		while(x < colunas*3){
			cout << "=";
			x++;
		}
		cout << "#" << endl;
		
		for (int i = 0; i < linhas; i++) {
			cout << "# \t";
		      for (int j = 0; j < colunas; j++) {
           		cout << _matriz[i][j] << "\t";
        	} 
        	cout << "#";
        	cout << endl;
    	}
    	
    	x = 0;
		cout << " #";
		while(x < colunas*3){
			cout << "=";
			x++;
		}
		x =0;
		cout << " FIM MATRIZ ";
		while(x < colunas*3){
			cout << "=";
			x++;
		}
		cout << "#" << endl;
	}
	
	Matriz<T, linhas, colunas> soma(Matriz<T, linhas, colunas> outra){
		Matriz<T, linhas, colunas> resultado;
		if(this->_linha != outra._linha || this->_coluna != outra._coluna) {
			throw DimensaoMatrizInvalidaException();
		}
		for(int i = 0; i < linhas; i++){
			for (int j = 0; j < colunas; j++){
				resultado.insereValor(i, j, this->_matriz[i][j] + outra._matriz[i][j]);
			}
		}
		return resultado;
	}
	
	Matriz<T, linhas, colunas> subtrai(Matriz<T, linhas, colunas> outra){
		Matriz<T, linhas, colunas> resultado;
		if(this->_linha != outra._linha || this->_coluna != outra._coluna) {
			throw DimensaoMatrizInvalidaException();
		}
		for(int i = 0; i < linhas; i++){
			for (int j = 0; j < colunas; j++){
				resultado.insereValor(i, j, this->_matriz[i][j] - outra._matriz[i][j]);
			}
		}
		return resultado;
	}
	
	Matriz<T, linhas, colunas> multiplicaEscalar(int escalar){
		Matriz<T, linhas, colunas> resultado;
		for(int i = 0; i < linhas; i++){
			for (int j = 0; j < colunas; j++){
				resultado.insereValor(i, j, this->_matriz[i][j] * escalar);
			}
		}
		return resultado;
	}
	
	//sobrecarga de operadores
	Matriz<T, linhas, colunas> operator +(Matriz<T, linhas, colunas> outra){
		return this->soma(outra);
	}
	
	Matriz<T, linhas, colunas> operator -(Matriz<T, linhas, colunas> outra){
		return this->subtrai(outra);
	}
	
	Matriz<T, linhas, colunas> operator *(int escalar){
		return this->multiplicaEscalar(escalar);
	}
	
	//friends
	friend ostream &operator << <> (ostream &os, Matriz<T, linhas, colunas> &matriz);
	friend istream &operator >> <> (ostream &is, Matriz<T, linhas, colunas> &matriz);
		
private:
	T **_matriz;
	int _linha;
	int _coluna;	
};

template<typename T, int linhas, int colunas>
ostream &operator << (ostream &os, Matriz<T, linhas, colunas> &matriz){
    int x = 0;
	cout << " #";
	while(x < colunas*3){
		os << "=";
		x++;
	}
	x =0;
	cout << " INI MATRIZ ";
	while(x < colunas*3){
		os << "=";
		x++;
	}
	os << "#" << endl;
	
	for (int i = 0; i < linhas; i++) {
		os << "# \t";
	      for (int j = 0; j < colunas; j++) {
       		os << matriz._matriz[i][j] << "\t";
    	} 
    	os << "#";
    	os << endl;
	}
	
	x = 0;
	os << " #";
	while(x < colunas*3){
		os << "=";
		x++;
	}
	x =0;
	os << " FIM MATRIZ ";
	while(x < colunas*3){
		os << "=";
		x++;
	}
	os << "#" << endl;
    return os;
}

template<typename T, int linhas, int colunas>
istream &operator >> (istream &is, Matriz<T, linhas, colunas> &matriz){
	T valor;
	for (int i = 0; i < linhas; i++) {
	      for (int j = 0; j < colunas; j++) {
       		cout << "Digite um valor na posicao matriz[" << i << "][" << j << "] : ";
			is >> valor;
			matriz.insereValor(i, j, valor);     
    	} 
	}
	return is;
}

#endif
