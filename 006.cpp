#include<iostream>
#include<fstream>
using namespace std;

void Merge(char** lista, int ini, int med, int fin){
    int izq = ini,der = med + 1, ia = 0;
    int tam = fin - ini + 1;
    char ** Aux = new char*[tam];
    for(int i = 0; i < tam; i++){
        Aux[i] = new char[100];
    }
    while(izq <= med && der <= fin){
        if(lista[izq][0] < lista[der][0]){
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

void MergeSort(char** lista, int ini, int fin){
    if(ini < fin){
        int med = (ini + fin)/ 2;
        MergeSort(lista, ini, med);
        MergeSort(lista, med + 1, fin);
        Merge(lista, ini, med, fin);
    }
}

int guardar(string file, char** arreglo, int tam)
{
    ifstream f;
    f.open(file);
    int i = 0;
    while(!f.eof() && i < tam)
    {
        f.getline(*arreglo,100);
        arreglo++;
        i++;
    }
    f.close();
    return i;
}

int main()
{
    int tam = 100000;
    char ** ptr = new char*[tam];
    for(int i = 0; i < tam; i++){
        ptr[i] = new char[100];
    }

    //Extraemos las palabras y algunas frases de un archivo .txt
    string file  = "Palabras.txt";
    //Guardamos la cantidad de palabras extraidas
    int len = guardar(file, ptr, tam);
    printf("Largo = %d\n", len);

    //Usamos la funcion del problema 3 modificada
    MergeSort(ptr, 0, len-1);

    //Mostramos las palabras ordenadas
    printf("Ordenado:\n\n");
    while(len--){
        printf("%s \n",*ptr);
        ptr++;
    }
    printf("\n\n");
}