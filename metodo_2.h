#ifndef METODO_2_H
#define METODO_2_H
#include "archivos_texto.h"

bool codificacion_String(int semilla, string n_archivo, string n_arvhivo2);
string text2Bin (string texto);
string int2Bin(char letra);
string reglas_codifica_String(string binario, int semilla);
string metodo2(string pedazo);
string bin2Text(string binario);
char conv_letra(string pedazo);
bool decodificacion_String(int semilla, string n_archivo, string n_archivo2);
string reglas_decodifica(string binario, int semilla);
string metodo2_decodifica(string pedazo);

#endif // METODO_2_H
