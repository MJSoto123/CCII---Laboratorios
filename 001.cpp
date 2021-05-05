//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
// Tamaño del arreglo 1000000. (Iterativa y recursiva).
#include<bits/stdc++.h>
using namespace std;

long long sumRec(const int *array, int tam, long sum){
    if(tam == 0){
        // return *array;
        return sum;
    }
    else{
        // return *array + sumRec(array + 1, tam - 1); 
        return sumRec(array + 1, tam - 1, sum + *(array));
    }
}

long long sumIter(const int* array, int tam){
    long long sum = 0;
    for(int i = 0; i < tam; sum +=array[i], i++);
    return sum;
}

int main(){
    int tam = 1000000;
    int* array= new int [tam];
    for(int i = 0; i < tam; array[i] = i + 1, i++);
    cout << "Suma Iterativa: " << sumIter(array, tam) << endl;
    cout << "Suma Recursiva: " << sumRec(array, tam, 0) << endl;
    delete []array;
}