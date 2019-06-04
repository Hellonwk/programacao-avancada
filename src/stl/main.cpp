/*
 * UTP - BCC
 * Programacao Avancada - 2o Bimestre
 * Aluna: Sabrina Eloise Nawcki
 */

#include <iostream>
#include <string>

#include <vector>
#include <list>
#include <set>
#include <map>

#include <algorithm>

using namespace std;

/* STL - ATIVIDADE 01
 * Usando a classe vector execute as seguintes operacoes:
 *	Crie um vetor vazio e imprima na tela
 *	Adicione os itens de compra e imprima: “ovos”, “leite”, “acucar”, “chocolate” e “farinha”
 *	Remova o ultimo elemento e imprima
 *	Adicione o item “cafe” e imprima
 *	Pesquise pelo item “acucar” e troque por “mel” e imprima
 *	Pesquise pelo item “leite”, remova e imprima
 *	Ordene o vetor e imprima
 */
void Atividade01() {
    vector<string> vetor; //Cria um vetor vazio
    
    cout << "Vetor vazio!" <<endl;
    for (int i = 0; i < vetor.size(); i++) {
        cout << "v[" << i << "] = " << vetor[i] << endl; //Imprime os elementos do vetor
    }
    
    //Adiciona os elementos: “ovos”, “leite”, “acucar”, “chocolate” e “farinha”
    vetor.push_back("ovos");
    vetor.push_back("leite");
    vetor.push_back("acucar");
    vetor.push_back("chocolate");
    vetor.push_back("farinha");
    
    cout << "Vetor contem ''ovos'', ''leite'', ''acucar'', ''chocolate'' e ''farinha'' " <<endl;
    for (int i = 0; i < vetor.size(); i++) {
        cout << "v[" << i << "] = " << vetor[i] << endl; //Imprime os elementos do vetor
    }
    
    vetor.pop_back(); //Remove o ultimo item do vetor
    
    cout << "Vetor contem ''ovos'', ''leite'', ''acucar'' e ''chocolate'' " <<endl;
    for (int i = 0; i < vetor.size(); i++) {
        cout << "v[" << i << "] = " << vetor[i] << endl; //Imprime os elementos do vetor
    }
    
    vetor.push_back("cafe");
    
    cout << "Vetor contem ''ovos'', ''leite'', ''acucar'', ''chocolate'' e ''cafe'' " <<endl;
    for (int i = 0; i < vetor.size(); i++) {
        cout << "v[" << i << "] = " << vetor[i] << endl; //Imprime os elementos do vetor
    }
    
    // Acesso aos elementos do vetor
    for (int i = 0; i < vetor.size(); i++) {
    	if(vetor[i] == "acucar")
        	vetor[i] = "mel";  //Substitui 'acucar' por 'mel'
    }
    cout << "Vetor contem ''ovos'', ''leite'', ''mel'', ''chocolate'' e ''cafe'' " <<endl;
    for (int i = 0; i < vetor.size(); i++) {
        cout << "v[" << i << "] = " << vetor[i] << endl; //Imprime os elementos do vetor
    }
    
    // Acesso aos elementos do vetor
    for (int i = 0; i < vetor.size(); i++) {
    	if(vetor[i] == "leite")
        	vetor.erase(vetor.begin() + i);  //Remove o item 'leite'
    }
    cout << "Vetor contem ''ovos'', ''mel'', ''chocolate'' e ''cafe'' " <<endl;
    for (int i = 0; i < vetor.size(); i++) {
        cout << "v[" << i << "] = " << vetor[i] << endl; //Imprime os elementos do vetor
    }

}

/* STL - ATIVIDADE02
 * Usando a classe list execute as seguintes operações:
 * Crie uma lista vazia e imprima na tela
 * Adicione os itens de compra e imprima: “ovos”, “leite”, “acucar”, “chocolate” e “farinha”
 * Remova o ultimo elemento e imprima
 * Adicione o item “cafe” no inicio e imprima
 * Pesquise pelo item “acucar” e troque por “mel” e imprima
 * Insira o item “fermento” antes do item “chocolate” e imprima
 * Pesquise pelo item “leite”, remova e imprima
 * Ordene os elementos da lista em ordem decrescente e imprima
 */
void Atividade02() {
	list<string> lista;
    list<string>::iterator it;
    
    cout << "Lista vazia!" <<endl;
    for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
    }
	
	//Adiciona os elementos: “ovos”, “leite”, “acucar”, “chocolate” e “farinha”
    lista.push_back("ovos");
    lista.push_back("leite");
    lista.push_back("acucar");
    lista.push_back("chocolate");
    lista.push_back("farinha");

  	cout << "Lista contem ''ovos'', ''leite'', ''acucar'', ''chocolate'' e ''farinha'' " <<endl;
  	for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}

	lista.pop_back(); //Remove o ultimo item da lista
    
    cout << "Lista contem ''ovos'', ''leite'', ''acucar'' e ''chocolate'' " <<endl;
    for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}
	
	lista.push_front("cafe"); //Adiciona cafe no inicio da lista
	
    cout << "Lista contem ''cafe'', ''ovos'', ''leite'', ''acucar'' e ''chocolate'' " <<endl;
	for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}
	
	for (it = lista.begin(); it != lista.end(); it++) {
    	if(*it == "acucar")
        	*it = "mel";  //Substitui 'acucar' por 'mel'
    }
    
    cout << "Lista contem ''cafe'', ''ovos'', ''leite'', ''mel'' e ''chocolate'' " <<endl;
	for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}
	
	for (it = lista.begin(); it != lista.end(); it++) {
    	if(*it == "chocolate")
        	lista.insert(it, "fermento");  //Insere 'fermento' antes do 'chocolate'
    }
    
    cout << "Lista contem ''cafe'', ''ovos'', ''leite'', ''mel'', ''fermento'' e ''chocolate'' " <<endl;
	for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}
	
	for (it = lista.begin(); it != lista.end(); it++) {
    	if(*it == "leite")
        	lista.erase(it);  //Deleta 'leite' da lista
    }
    
    cout << "Lista contem ''cafe'', ''ovos'', ''mel'', ''fermento'' e ''chocolate'' " <<endl;
	for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}
	
	lista.sort();
	lista.reverse();
	
	cout << "Lista contem ''ovos'', ''mel'', ''fermento'', ''chocolate'' e ''cafe''" <<endl;
	for (it = lista.begin(); it != lista.end(); it++) {
        cout << " * " << *it << endl; //Imprime os elementos da lista
	}
}

/* STL - ATIVIDADE03
 * Usando a classe set execute as seguintes operacoes:
 * Crie um conjunto acesso com os codigos 1234, 9999 e 9876
 * Peca para o usuario digitar um numero
 * Informe para o usuario se ele obteve o acesso
 * Se o usuario digitar o mesmo codigo invalido duas vezes, o sistema devera sair
 */
void Atividade03() {
    set<int> conjunto;
	set<int>::iterator it;
	
    conjunto.insert(1234);
    conjunto.insert(9999);
    conjunto.insert(9876);
	
	int tentativas = 2;
	int num_acesso;
	do {
		cout << "Digite o numero de acesso: ";
		cin >> 	num_acesso;
		if(conjunto.end() == conjunto.find(num_acesso)) {
			tentativas--;
		}else{
			cout << "Voce obteve acesso!" << endl;
			tentativas = 0;
		}
	}while(tentativas > 0);
	cout << "Acesso:" << endl;
    for (it = conjunto.begin(); it != conjunto.end(); it++) {
        cout << *it << endl;
    }
}

/* STL - ATIVIDADE04
 * Usando a classe map execute as seguintes operacoes:
 * Crie um mapa vazio e imprima na tela
 * Adicione 8 cores como chave e no valor armazene o valor RGB correspondente: cor["vermelho"] = 0xFF0000
 * Imprima todas as chaves e valores armazenados no mapa
 * Pesquise uma cor que nao exista no mapa
 */
void Atividade04() {
	 map<string, string> mapa;
	 map<string, string>::iterator it;
	 
	for (it = mapa.begin(); it != mapa.end(); it++) {
        cout << "Cor: " << (*it).first << endl;
        cout << "Valor em Hexa: " << (*it).second << endl;
    }
    
    mapa["Vermelho"] = "0xFF0000";
    mapa["Verde"] = "0x00FF00";
    mapa["Azul"] = "0x0000FF";
    mapa["Laranja"] = "0xFF8000";
    mapa["Rosa"] = "0xFF0080";
    mapa["Branco"] = "0xFFFFFF";
    mapa["Cinza"] = "0x808080";
    mapa["Amarelo"] = "0xFFFF00";
    
    for (it = mapa.begin(); it != mapa.end(); it++) {
        cout << "Cor: " << (*it).first << endl;
        cout << "Valor RGB: " << (*it).second << endl;
    }
    
    if(mapa.end() == mapa.find("Preto")) {
		cout << "Essa cor nao esta mapeada" << endl;
	}else{
		cout << ""<< endl;
	}
}

int main() {
	//Atividade01();
	//Atividade02();
	//Atividade03();
	//Atividade04();
	return 0;
}
