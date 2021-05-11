#ifndef ARCHIVOS_TEXTO_H
#define ARCHIVOS_TEXTO_H


#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void crear_txt(string name);
void escribit(string texto, string nombre, bool modo);
string leer (string nombreArchivo, bool modo);

#endif // ARCHIVOS_TEXTO_H
