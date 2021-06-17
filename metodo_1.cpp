#include "metodo_1.h"

bool codificacion_Char(int semilla, string n_archivo,string n_arvhivo2)
{
    bool result;
    char *texto, *binario;
    try {
        texto=read(n_archivo, true);
        binario=TextBin(texto);
    }  catch (...) {

    }
}



char TextBin(char *texto)
{
    unsigned long long tamaño = 0;
    char auxiliar;

    for(unsigned long long k = 0;;k++){ // calcula el tamaño del arreglo de caracteres array

        if(texto[k] != '\0') tamaño++;
        else{
            tamaño++;
            break;
        }
    }
    for(unsigned long long i=0;i<tamaño;i++){
        auxiliar=intBin(texto[i]);

    }

}

char intBin(char letra)
{
 char binario[8 ];
 for(int i=0;i<=7;i++){ // Se tiene en cuenta el caracter de fin de cadena
     binario[i]=(((letra<<i)&0b10000000)/128); // operacion bit a bit para convertir el binario

 }
 return binario;
}
