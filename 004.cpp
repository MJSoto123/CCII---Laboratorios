// Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include<iostream>
using namespace std;

int sizeIter(const char * ptr){
	int cont = 0;
	while(*ptr != '\0'){
		cont++;
		ptr += 1;
	}
	return cont;
}

int sizeRec(const char * ptr){
	if(*(ptr) == '\0'){
		return 0;
	}else{
		return 1 + sizeRec(ptr + 1);
	}
}

int main(){
	string pharse = "30 esta es una frase de prueba";
	const char * ptr = &pharse[0];
	// printf("Ingrese la frase que quiera medir: \n");
	// getline(cin, pharse);
	printf("\nMedicion Iterativa: %d \n", sizeIter(ptr));
	printf("Medicion Recursiva: %d \n\n", sizeRec(ptr));
}