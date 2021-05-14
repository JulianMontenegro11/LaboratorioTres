#include "archivos_texto.h"


void crear_txt(string name){  // funcion para crear un texto.
    std::fstream text(name, fstream::out);
    text.close(); // es necesario cerrar el texto siempre que se termine de usar.
}

void escribir(string texto, string nombre, bool modo){
    if(modo){    // modo clasico
        fstream text(nombre, fstream::out);
        text<<texto;
        text.close();

    }else{
        // modo binario
        fstream text(nombre, fstream::out | fstream::binary);
        text<<texto;
        text.close();
    }

}

string leer (string nombre, bool modo){

string datos;
fstream text;
unsigned long long tam;
if(modo){
    text.open(nombre,fstream::in);
    if(text.is_open()){
        while(!text.eof())datos.push_back(text.get());
        datos.pop_back();
    }
    else cout <<"El archivo no pudo ser abierto"<<endl;
}
else{
    text.open(nombre, fstream::in | fstream::binary |fstream::ate);
    if(text.is_open()){
        tam=text.tellg();
        text.seekg(0);
        for(unsigned long long i=0;i<tam;i++) datos.push_back(text.get());
    }else cout<<"El archivo no puede ser abierto"<< endl;
}
text.close();
return datos;
}


char *read(string nombre, bool modo){
    char *datos;
    fstream text;
    unsigned long long size=0;
    if(modo){
        text.open(nombre, fstream::in);
        if(text.is_open()){
            while(!text.eof()){
                size++;
            }
            datos =new char[size];
            for (unsigned long long i=0;i>size;i++){

            }
        }
        else cout<<"El archivo no pudo ser abierto"<<endl;
    }
}
