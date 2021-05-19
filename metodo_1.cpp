#include "metodo_1.h"

bool codificacion_Char(int semilla, string n_archivo,string n_arvhivo2)
{
    bool result;
    char *texto, *binario;
    try {
        texto=read(n_archivo, true);
        binario=textBin(texto);
    }  catch (...) {

    }
}



void textBin(char *texto)
{
    unsigned long long tamaño = 0;

    for(unsigned long long k = 0;;k++){ // calcula el tamaño del arreglo de caracteres array

        if(texto[k] != '\0') tamaño++;
        else{
            tamaño++;
            break;
        }
    }
}
