#include <iostream>
#include <ctime> //Se utiliza para usar las funciones que crean n�meros aleatorios
using namespace std;

int main(){
	int numeros[100];
	srand(time ( 0 ) );
	
	for(int i = 0; i < 100; i++){
	 numeros[i]=rand() % 100; //Se le asignan n�meros del 0 al 99
    } 
	for(int i = 0; <100; i++){
	count << numeros [i] << endl;
	}
	return 0;
}
