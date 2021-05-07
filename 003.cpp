//Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.
#include <bits/stdc++.h>
using namespace std;

void Merge(int* lista, int ini, int med, int fin){
    int izq = ini,der = med + 1, ia = 0;
    int Aux[fin - ini + 1];
    while(izq <= med && der <= fin){
        if(lista[izq] < lista[der]){
            Aux[ia] = lista[izq];
            izq++;
            ia++;
        }
        else{
            Aux[ia] = lista[der];
            der++;
            ia++;
        }
    }

    for(int k = der; k <= fin; k++){
        Aux[ia] = lista[k];
        ia++;
    }
    for(int k = izq; k <= med; k++){
        Aux[ia] = lista[k];
        ia++;
    }
    for(int k = ini; k < ia + ini; k++){
        lista[k] = Aux[k - ini];
    }
}

void MergeSort(int* lista, int ini, int fin){
    if(ini < fin){
        int med = (ini + fin)/ 2;
        MergeSort(lista, ini, med);
        MergeSort(lista, med + 1, fin);
        Merge(lista, ini, med, fin);
    }
}

int main()
{
    int tam = 520000;
    int * ptr = new int[tam];

    //Numeros aleatorios
    srand(time(NULL));
    for(int i = 0; i < tam; ptr[i] = rand()%50, i++);

    //Funciona hasta 520 000  aprox
    MergeSort(ptr, 0, tam-1);
    
    //Se muestran cada 10 000 los numeros ya ordenados
    for(int i = 0; i < tam; i+= 10000){
        cout << i << " " << ptr[i] << endl;
    }
}