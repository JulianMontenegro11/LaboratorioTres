#include "metodo_2.h"

bool codificacion(int semilla, string n_archivo, string n_arvhivo2)
{
    bool result=true;
   string texto, binario;
   try {
       texto=leer(n_archivo, true);
        binario=text2Bin(texto);
        binario=reglas_codifica(binario,semilla);
        texto=bin2Text(binario);
        escribir(texto,n_arvhivo2,false);
   }  catch (...) {
       result=false;
   }

    return result;
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
    for(int i=0;i<=7;i++){
        binario.push_back(((letra<<i)&0b10000000)/128);// se usan opeeaciones bit a bit para convertir el enterio en binario

    }
   return binario;
}

string reglas_codifica(string binario, int semilla)
{
    string pedazo, datos;
    for(unsigned long long i=0;i<binario.length();i++){
        pedazo.push_back(binario[i]);
        if((i+1)%semilla==0||i==binario.length()-1){
            pedazo=metodo2(pedazo);
            datos.append(pedazo);
            pedazo.clear();
        }
    }
    return datos;
}

string metodo2(string pedazo)
{
    string datos;
    datos.push_back(pedazo[pedazo.length()-1]); // se entrega el ultimo caracter del binario a la primera posicion
    for(unsigned long long i=0;i<pedazo.length()-1;i++){
        datos.push_back(i);
    }
    return datos;
}

string bin2Text(string binario)
{
     string datos, pedazo;
     for(unsigned long long i=0;i<binario.length();i++){
         pedazo.push_back(binario[i]);
         if((i+1)%8==0){
             datos.push_back(conv_letra(pedazo));
             pedazo.clear();
         }

     }
     return datos;
}

char conv_letra(string pedazo)
{
    char l=0;
    for(unsigned long long i=0, j=128;i<pedazo.length();i++,j/=2 ){
            l+=j*pedazo[i];
    }
    return l;
}
