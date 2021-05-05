// Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
// (asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).
#include<iostream>
using namespace std;

int main(){
	string a = "a esta es una frase de prueba";
	string b = "b esta es una frase de prueba";
	const char * ptr = &a[0];
	printf("Ingrese la frase a: \n");
	getline(cin, a);
	printf("Ingrese la frase b: \n");
	getline(cin, b);
    b = b + " " + a;
	// printf("Frases concatenadas:\n%s \n",b.c_str());
	printf("\nFrases concatenadas 1: \n");
    cout << b;
    
}