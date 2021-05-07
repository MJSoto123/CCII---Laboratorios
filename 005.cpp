// Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
// (asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
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

void concatString(char * ptr_a, int len_a, char * ptr_b, int len_b){
	for(int i = len_b; i < len_b + len_a; i++){
		*(ptr_b + i) = *ptr_a++;
	}
}

int main(){
	char * ptr_a = new char[5000000];
	char * ptr_b = new char[10000000];

	printf("Ingrese la primera parte de la frase: \n");
    cin.getline(ptr_b,500000);

	printf("Ingrese el complemento de la frase: \n");
    cin.getline(ptr_a,500000);

	int len_a = sizeIter(ptr_a);
	int len_b = sizeIter(ptr_b);

	concatString(ptr_a, len_a, ptr_b, len_b);
	printf(ptr_b);
}