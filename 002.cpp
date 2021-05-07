// Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del
// arreglo 1000000.
#include<iostream>
#include<windows.h>
using namespace std;

void intercambio(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

void invertirRec(int* primero, int* ultimo){
	if(primero < ultimo){
		intercambio(*primero++, *ultimo--);
		invertirRec(primero, ultimo);
	}
}

void invertirIter(int* primero, int* ultimo){
	while(primero < ultimo){
		intercambio(*primero++, *ultimo--);
	}
}

void mostrar(int * array, long tam){
}

int main(){
	
	long tam = 130000;
	int* array = new int[tam];
	int val = 1;
	while(val){
		system("cls");
		//Numeros del 1 a /tam/
		for(int i = 0; i < tam; array[i] = i + 1, i++);
		
		cout << "Ingresar 1 o 0 (iterativo - recursivo): ";
		cin  >> val;

		if(val){
			//La funcion iterativa no tiene problemas con 1 000 000
			invertirIter(array, array + tam - 1);
		}else{
			//La funcion recursiva deja de funcionar a partir de 130 000 aprox
			invertirRec(array, array + tam - 1);
		}

		//Solo se muestran cada 10 000 valores
		for(int i = 0; i < tam; i += 10000){
		cout << array[i] << endl;
		}

		cout << "\nIngrese 1 si quiere revisar NUEVAMENTE: ";
		cin >> val;
	}
	
	

	
	return 0;
}