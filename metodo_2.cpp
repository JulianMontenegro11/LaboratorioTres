#include "metodo_2.h"

bool codificacion(int semilla, string n_archivo)
{
   string texto, binario;
   texto=leer(n_archivo, true);
    binario=text2Bin(texto);
}


string text2Bin(string texto)
{
    string binario, aux;
    for(unsigned long long i=0;i<texto.length();i++){
       aux=int2Bin(texto[i]); // se convierte a bonario
       binario.append(aux);  // se concatena cada caacter en binario

    }
    return binario;
}

string int2Bin(char letra)
{
    string binario;
    for(int i=0;i<7;i++){
        binario.push_back(((letra<<i)&0b10000000)/128);// se usan opeeaciones bit a bit para convertir el enterio en binario
        return binario;
    }
}
