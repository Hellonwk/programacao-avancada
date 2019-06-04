/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include <iostream>

#include "Matriz.h"

using namespace std;

/* TEMPLATES- ATIVIDADE 02
 * Escreva um programa que declare 4 matrizes e realize as operações entre elas.
 * Após cada operação imprima os valores na tela.
 */
void templates_atividade02(){
	Matriz<int, 2, 2> matriz1;
	cout << "\n matriz1 \n";
	cout << matriz1; //imprime matriz com zeros
    matriz1.insereValores(); //faz inserção de todos os valores manualmente
    cout << "\n matriz1 \n";
	cout << matriz1;
    
    Matriz<int, 2, 2> matriz2; 
	cout << "\n matriz2 \n";
	cout << matriz2; //imprime matriz com zeros
    matriz2.insereValores(); //faz inserção de todos os valores manualmente
	cout << "\n matriz2 \n";
	cout << matriz2;

	Matriz<int, 2, 2> matriz3 = matriz1.soma(matriz2); //matriz1 + matriz2 = matriz3
	cout << "\n matriz3 = matriz1 + matriz2 \n";
	matriz3.imprime(); //imprime soma de matriz1 com matriz 2
    
    Matriz<int, 2, 2> matriz4 = matriz3.subtrai(matriz2); //matriz3 - matriz2 = matriz4
    cout << "\n matriz4 = matriz3 - matriz2 \n";
	matriz4.imprime(); //imprime subtracao de matriz3 com matriz 2
	
	Matriz<int, 2, 2> matriz5 = matriz4.multiplicaEscalar(2); //matriz4 * 2 = matriz5
	cout << "\n matriz5 = matriz4 * 2 \n";
	cout << matriz5; //imprime a multiplicacao escalar da matriz 4 com o valor 2
}

/* TEMPLATES- ATIVIDADE 03
 * Escreva um programa que declare 4 matrizes e realize as operações entre elas, usando a sobregarga de operadores.
 * Após cada operação imprima os valores na tela.
 */
void templates_atividade03(){
	Matriz<int, 2, 2> matriz1;
    matriz1.insereValores(); //faz inserção de todos os valores manualmente
    cout << "\n matriz1 \n";
	cout << matriz1;
    
    Matriz<int, 2, 2> matriz2; 
    matriz2.insereValores(); //faz inserção de todos os valores manualmente
	cout << "\n matriz2 \n";
	cout << matriz2;

	Matriz<int, 2, 2> matriz3 = matriz1 + matriz2; //matriz1 + matriz2 = matriz3
	cout << "\n matriz3 = matriz1 + matriz2 \n";
	matriz3.imprime(); //imprime soma de matriz1 com matriz 2
    
    Matriz<int, 2, 2> matriz4 = matriz3 - matriz2; //matriz3 - matriz2 = matriz4
    cout << "\n matriz4 = matriz3 - matriz2 \n";
	matriz4.imprime(); //imprime subtracao de matriz3 com matriz 2
	
	Matriz<int, 2, 2> matriz5 = matriz4 * 2; //matriz4 * 2 = matriz5
	cout << "\n matriz5 = matriz4 * 2 \n";
	cout << matriz5; //imprime a multiplicacao escalar da matriz 4 com o valor 2
}

/* TEMPLATES- ATIVIDADE 04
 * Escreva um programa que declare 1 matriz usando os friends cin para inserir e cout para imprimir na tela.
 */
void templates_atividade04(){
	Matriz<int, 2, 2> matriz1;
	cin >> matriz1; //insere matriz
	cout << matriz1; //imprime matriz
}
int main(int argc, char** argv) {
	//templates_atividade02();
	//templates_atividade03();
	//templates_atividade04();
	return 0;
}
