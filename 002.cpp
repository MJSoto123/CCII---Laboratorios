// Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del
// arreglo 1000000.
#include<iostream>
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
	long tam = 1000000;
    int* array = new int[tam];
    for(int i = 0; i < tam; array[i] = i + 1, i++);
	// for(int i = 0; i < tam; i++){
	// 	cout << array[i] << endl;
	// }
	invertirIter(array, array + tam - 1);
	// invertirRec(array, array + tam - 1);
	// for(int i = 0; i < tam; i++){
	// 	cout << array[i] << endl;
	// }
	cout << *(array + 1);
	return 0;
}