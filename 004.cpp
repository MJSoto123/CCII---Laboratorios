// Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include<iostream>
using namespace std;

int sizeIter(char * ptr){
	int cont = 0;
	while(*ptr != '\0'){
		cont++;
		ptr += 1;
	}
	return cont;
}

int sizeRec(char * ptr){
	if(*(ptr) == '\0'){
		return 0;
	}else{
		return 1 + sizeRec(ptr + 1);
	}
}

int main(){
	char * ptr = new char[10000000];

	//Guarda la frase
    printf("Ingrese la frase que quiera medir: \n");
    cin.getline(ptr,1000000);

	//Mediciones
	printf("\nMedicion Iterativa: %d \n", sizeIter(ptr));
	printf("Medicion Recursiva: %d \n\n", sizeRec(ptr));
}