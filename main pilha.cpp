#include <iostream>
#include "pilha.h"
#include <stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	
	cout<<"Stack options:\n";
	cout<<"1 - Push\n"; //inclui valores no vetor
	cout<<"2 - Pop\n";
	cout<<"3 - Top\n";
	cout<<"4 - isEmpty\n";
	cout<<"5 - Size\n";
	cout<<"6 - Print\n";
	cout<<"Other to quit\n";
	cout<<"?\n";
}
int main(int argc, char** argv) {
	
	//reserva uma memória inteira sem sinal que recebe 0
	//declara uma variavel int que recebe 0
	unsigned int op(0);
	pilha p;
	
	do{
		menu();
		cin >> op;
		
		switch (op){
			
			case 1:
				cadastro(p);
				break;
				
			case 2:
				imprime(p);
				break;
				
			case 3:
				quantidade(p);
				break;
			
			case 4:
				isEmpty(p);
				break;
			
			case 5:
				top();
				break;
				
			case 6:
				//print
				break;
				
			default:
				cout<<"Option is not valid!\n";
		
		}
		
	}while(op > 0 && op < 7);
	cout<<"End of Stack Program!";
	return 0;
}
