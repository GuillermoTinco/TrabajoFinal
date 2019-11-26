#ifndef TRABAJOFINAL_FUNCIONESFIN_H
#define TRABAJOFINAL_FUNCIONESFIN_H

#include "Variablesnat.h"
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <string.h>
#include <cstring>
#define MAX 1000

void substring(char *cadena, char *subcadena, int inicio, int longitud)
{
    int i;

    for(i=0; i < longitud && inicio+i < strlen(cadena); i++)
        subcadena[ i ] = cadena[ inicio+i ];

    subcadena[ i ] = '\0';
}

void centrar_linea(string & lineatextode, char *linea, int ancho)
{
    int i, espacios;
    espacios = (ancho - strlen(linea)) / 2;

    for(i=0; i < espacios; i++){
        lineatextode+=' ';
    }

    lineatextode+=linea;
}

void derecha_linea(string & lineatextode, char *linea, int ancho)
{
    int i, espacios;
    espacios = ancho - strlen(linea);

    for(i=0; i < espacios; i++){
        lineatextode+=' ';
    }
    lineatextode+=linea;
}

string centrar_cadena(char *cadena, int ancho)
{
    string lineatextode="";
    char subcadena[MAX];
    int i, total;

    total = (int)ceil((float)strlen(cadena) / ancho);

    for(i=0; i < total; i++)
    {
        substring(cadena, subcadena, i*ancho, ancho);
        centrar_linea(lineatextode, subcadena, ancho);
    }
    return lineatextode;
}

string derecha_cadena(char *cadena, int ancho)
{
    string lineatextode="";
    char subcadena[MAX];
    int i, total;

    total = (int)ceil((float)strlen(cadena) / ancho);

    for(i=0; i < total; i++)
    {
        substring(cadena, subcadena, i*ancho, ancho);
        derecha_linea(lineatextode, subcadena, ancho);
    }
    return lineatextode;
}

entero palabra_en_texto(cadena& texto7, cadena& palabra7){
    entero auxPal=0,contador=0;
    for(entero_positivo i=0;i<texto7.size();i++){
        if(toupper(texto7[i])==toupper(palabra7[auxPal])){
            auxPal++;
            if (auxPal==palabra7.size()){
                if((toupper(texto7[i+1])<65 or toupper(texto7[i+1])>90)and(toupper(texto7[i-auxPal])<65 or toupper(texto7[i-auxPal])>90)){
                    auxPal=0;
                    contador++;
                }
            }
        }
        else
            auxPal=0;
    }
    return contador;
}
nada reemplazar(entero& desde, entero& hasta,cadena& texto,cadena& reemplazo,cadena& palabra){
    vector<caracter> txt;
    for (char i : texto) {
        txt.push_back(i);
    }
    for(entero i=hasta;i>=desde;i--){
        txt.erase(txt.begin()+i);
    }
    for (entero i=reemplazo.size()-1;i>=0;i--){
        txt.insert(txt.begin()+desde,reemplazo[i]);
    }
    cadena newtxt;
    for(char i : txt){
        newtxt+=i;
    }
    texto=newtxt;
}
nada reemplazar_palabra(cadena& texto8, cadena& palabra8,cadena& reemplazo8){
    entero auxPal=0,auxw=0,desde,hasta,contador=0, confirmador=0;entero_positivo i;tof caso_especial=false,mayus=true,minus=true;
    if (palabra8.size()==reemplazo8.size()){
        for(entero_positivo j=0;j<palabra8.size();j++){
            if(toupper(palabra8[j])!=reemplazo8[j]) mayus=false;
            if(tolower(palabra8[j])!=reemplazo8[j]) minus=false;
            if(mayus or minus)caso_especial=true;
        }
    }
    while(auxw==0) {
        for (i = 0; i < texto8.size(); i++) {
            if (toupper(texto8[i])==toupper(palabra8[auxPal])) {
                auxPal++;
                if (auxPal == palabra8.size()) {
                    if ((toupper(texto8[i+1])<65 or toupper(texto8[i+1])>90)and(toupper(texto8[i-auxPal])<65 or toupper(texto8[i-auxPal])>90)) {
                        contador++;
                        if(contador>confirmador){
                            if(caso_especial)confirmador++;
                            contador=0;
                            hasta = i;
                            desde = i - auxPal +1;
                            auxPal = 0;
                            reemplazar(desde, hasta, texto8, reemplazo8, palabra8);
                            break;
                        }
                    }
                }
            }
            else auxPal = 0;
        }
        if (i==texto8.size()) auxw++;
    }
}
entero palabras_en_texto(cadena& texto9, cadena& palabra9){
    entero auxPal=0,contador=0;
    for(entero_positivo i=0;i<texto9.size();i++){
        if(toupper(texto9[i])==toupper(palabra9[auxPal])){
            auxPal++;
            if (auxPal==palabra9.size()){
                if((toupper(texto9[i+1])<65 or toupper(texto9[i+1])>90)and(toupper(texto9[i-auxPal])<65 or toupper(texto9[i-auxPal])>90)){
                    auxPal=0;contador++;
                }
            }
        }
        else
            auxPal=0;
    }
    return contador;
}
entero numlineas(ifstream &archivo){
    letras unused;
    entero numLines=0;
    while(getline(archivo, unused)){
        numLines++;
    }
    return numLines;
}
letras arcomillas(string texto11){
    letras texto111="";
    for(entero i = 0; i<texto11.size(); i++){
        if (texto11[i]<127 && texto11[i] > -1)
            texto111+= texto11[i];
        }
    return texto111;
}
nada AlinearDerecha(cadena &parrafo, string &texto4){
    vector<string> VectorParrafo;
    bool pruebas=0;
    string linea;
    VectorParrafo.push_back(parrafo);
    string lineaPart;
    int ancho=70;
    int contLetras=0;
    int posUltimoE;
    for(int i=0; i<VectorParrafo.size(); i++){
        linea = VectorParrafo[i];

        //aquí empieza
        while(linea.length()>ancho){
            lineaPart = linea.substr(0,ancho);
            if (pruebas==1)
                cout << "P1 " << lineaPart << endl;

            //si la ultima es espacio
            if(lineaPart[ancho-1]==' '){
                //modificar linea
                linea = linea.substr(ancho);
                if (pruebas==1){
                    cout << "Entrada 1" << endl;
                }

            }else{
                //si no es espacio, ver si es la ultima letra de una palabra
                if(linea[ancho]==' '){
                    if (pruebas==1){
                        cout << "Entrada 2" << endl;
                    }
                    //es la ultima palabra, no hay problema entonces
                    //modificar linea
                    linea = linea.substr(ancho+1);
                    lineaPart = lineaPart+" ";

                }else{
                    if (pruebas==1){
                        cout << "Entrada 3" << endl;
                    }
                    //tiene una palabra entrecortada, contar cuantas letras se eliminaran y agregaran como espacios
                    posUltimoE = ancho-1;
                    for(int m=ancho-1;m>=0;m--){
                        if(lineaPart[m]==' '){
                            break;
                        }else{
                            posUltimoE--;
                        }
                    }

                    contLetras = ancho-posUltimoE-1;


                    //modificar linea
                    linea = linea.substr(ancho-contLetras);


                    //eliminar estas letras
                    lineaPart = lineaPart.substr(0,ancho-contLetras);

                }
            }

            //Afinamiento
            //Elimina espacios adelante y atras
            char letra=lineaPart[0];
            while(letra==' '){
                lineaPart = lineaPart.substr(1);
                letra = lineaPart[0];
            }

            lineaPart[lineaPart.length()-1]='_';

            if (pruebas==1){
                cout << lineaPart << endl;

                for(int k=0; k<lineaPart.length();k++)
                    cout << k%10;
                cout << endl;
            }

            int longitud;
            for(int k=lineaPart.length()-1;k>=0; k--){
                if(lineaPart[k]=='_'){
                    longitud=k;break;
                }
            }
            lineaPart[lineaPart.length()-1]=' ';
            char cadena1[MAX];
            strcpy(cadena1, lineaPart.c_str());
            string lineaPart2 = derecha_cadena(cadena1,80);
            texto4 += lineaPart2+"\n";
            if (pruebas==1) {
                for (int k = 0; k < lineaPart.length(); k++)
                    cout << k % 10;
                cout << endl;
            }

        //    if(linea.length()<=ancho){
          //      cout << linea << endl << endl;
            //}

            //parrafo=lineaPart2+"\n"+linea;
        }
    }

}
nada AlinearIzquierda(cadena &parrafo, string &texto5){
    vector<string> VectorParrafo;
    bool pruebas=0;
    string linea;
    VectorParrafo.push_back(parrafo);
    string lineaPart;
    int ancho=70;
    int contLetras=0;
    int posUltimoE;
    for(int i=0; i<VectorParrafo.size(); i++){
        linea = VectorParrafo[i];

        //aquí empieza
        while(linea.length()>ancho){
            lineaPart = linea.substr(0,ancho);
            if (pruebas==1)
                cout << "P1 " << lineaPart << endl;

            //si la ultima es espacio
            if(lineaPart[ancho-1]==' '){
                //modificar linea
                linea = linea.substr(ancho);
                if (pruebas==1){
                    cout << "Entrada 1" << endl;
                }

            }else{
                //si no es espacio, ver si es la ultima letra de una palabra
                if(linea[ancho]==' '){
                    if (pruebas==1){
                        cout << "Entrada 2" << endl;
                    }
                    //es la ultima palabra, no hay problema entonces
                    //modificar linea
                    linea = linea.substr(ancho+1);
                    lineaPart = lineaPart+" ";

                }else{
                    if (pruebas==1){
                        cout << "Entrada 3" << endl;
                    }
                    //tiene una palabra entrecortada, contar cuantas letras se eliminaran y agregaran como espacios
                    posUltimoE = ancho-1;
                    for(int m=ancho-1;m>=0;m--){
                        if(lineaPart[m]==' '){
                            break;
                        }else{
                            posUltimoE--;
                        }
                    }

                    contLetras = ancho-posUltimoE-1;


                    //modificar linea
                    linea = linea.substr(ancho-contLetras);


                    //eliminar estas letras
                    lineaPart = lineaPart.substr(0,ancho-contLetras);

                }
            }

            //Afinamiento
            //Elimina espacios adelante y atras
            char letra=lineaPart[0];
            while(letra==' '){
                lineaPart = lineaPart.substr(1);
                letra = lineaPart[0];
            }

            lineaPart[lineaPart.length()-1]='_';

            if (pruebas==1){
                cout << lineaPart << endl;

                for(int k=0; k<lineaPart.length();k++)
                    cout << k%10;
                cout << endl;
            }

            int longitud;
            for(int k=lineaPart.length()-1;k>=0; k--){
                if(lineaPart[k]=='_'){
                    longitud=k;break;
                }
            }
            lineaPart[lineaPart.length()-1]=' ';
            cout << lineaPart << endl;
            texto5 += lineaPart+"\n";
            if (pruebas==1) {
                for (int k = 0; k < lineaPart.length(); k++)
                    cout << k % 10;
                cout << endl;
            }

           if(linea.length()<=ancho){
           cout << linea << endl << endl;
           }
            parrafo=lineaPart+"\n"+linea;
        }
    }

}
nada AlinearCentro(cadena &parrafo, string &texto6){
    vector<string> VectorParrafo;
    bool pruebas=0;
    string linea;
    VectorParrafo.push_back(parrafo);
    string lineaPart;
    int ancho=70;
    int contLetras=0;
    int posUltimoE;
    for(int i=0; i<VectorParrafo.size(); i++){
        linea = VectorParrafo[i];

        //aquí empieza
        while(linea.length()>ancho){
            lineaPart = linea.substr(0,ancho);
            if (pruebas==1)
                cout << "P1 " << lineaPart << endl;

            //si la ultima es espacio
            if(lineaPart[ancho-1]==' '){
                //modificar linea
                linea = linea.substr(ancho);
                if (pruebas==1){
                    cout << "Entrada 1" << endl;
                }

            }else{
                //si no es espacio, ver si es la ultima letra de una palabra
                if(linea[ancho]==' '){
                    if (pruebas==1){
                        cout << "Entrada 2" << endl;
                    }
                    //es la ultima palabra, no hay problema entonces
                    //modificar linea
                    linea = linea.substr(ancho+1);
                    lineaPart = lineaPart+" ";

                }else{
                    if (pruebas==1){
                        cout << "Entrada 3" << endl;
                    }
                    //tiene una palabra entrecortada, contar cuantas letras se eliminaran y agregaran como espacios
                    posUltimoE = ancho-1;
                    for(int m=ancho-1;m>=0;m--){
                        if(lineaPart[m]==' '){
                            break;
                        }else{
                            posUltimoE--;
                        }
                    }

                    contLetras = ancho-posUltimoE-1;


                    //modificar linea
                    linea = linea.substr(ancho-contLetras);


                    //eliminar estas letras
                    lineaPart = lineaPart.substr(0,ancho-contLetras);

                }
            }

            //Afinamiento
            //Elimina espacios adelante y atras
            char letra=lineaPart[0];
            while(letra==' '){
                lineaPart = lineaPart.substr(1);
                letra = lineaPart[0];
            }

            lineaPart[lineaPart.length()-1]='_';

            if (pruebas==1){
                cout << lineaPart << endl;

                for(int k=0; k<lineaPart.length();k++)
                    cout << k%10;
                cout << endl;
            }

            int longitud;
            for(int k=lineaPart.length()-1;k>=0; k--){
                if(lineaPart[k]=='_'){
                    longitud=k;break;
                }
            }
            lineaPart[lineaPart.length()-1]=' ';
            char cadena1[MAX];
            strcpy(cadena1, lineaPart.c_str());
            string lineaPart2 = centrar_cadena(cadena1,80);
            texto6 += lineaPart2+"\n";
            if (pruebas==1) {
                for (int k = 0; k < lineaPart.length(); k++)
                    cout << k % 10;
                cout << endl;
            }

            //    if(linea.length()<=ancho){
            //      cout << linea << endl << endl;
            //}

            //parrafo=lineaPart2+"\n"+linea;
        }
    }

}
nada Justificado(cadena &parrafo, string &texto3){
    vector<string> VectorParrafo;
    bool pruebas=0;
    string linea;
    VectorParrafo.push_back(parrafo);
    string lineaPart;
    int ancho=70;
    int contLetras=0;
    int posUltimoE;
    for(int i=0; i<VectorParrafo.size(); i++){
        linea = VectorParrafo[i];

        //aquí empieza
        while(linea.length()>ancho){
            lineaPart = linea.substr(0,ancho);
            if (pruebas==1)
                cout << "P1 " << lineaPart << endl;

            //si la ultima es espacio
            if(lineaPart[ancho-1]==' '){
                //modificar linea
                linea = linea.substr(ancho);
                if (pruebas==1){
                    cout << "Entrada 1" << endl;
                }

            }else{
                //si no es espacio, ver si es la ultima letra de una palabra
                if(linea[ancho]==' '){
                    if (pruebas==1){
                        cout << "Entrada 2" << endl;
                    }
                    //es la ultima palabra, no hay problema entonces
                    //modificar linea
                    linea = linea.substr(ancho+1);
                    lineaPart = lineaPart+" ";

                }else{
                    if (pruebas==1){
                        cout << "Entrada 3" << endl;
                    }
                    //tiene una palabra entrecortada, contar cuantas letras se eliminaran y agregaran como espacios
                    posUltimoE = ancho-1;
                    for(int m=ancho-1;m>=0;m--){
                        if(lineaPart[m]==' '){
                            break;
                        }else{
                            posUltimoE--;
                        }
                    }

                    contLetras = ancho-posUltimoE-1;


                    //modificar linea
                    linea = linea.substr(ancho-contLetras);


                    //eliminar estas letras
                    lineaPart = lineaPart.substr(0,ancho-contLetras);

                }
            }

            //Afinamiento
            //Elimina espacios adelante y atras
            char letra=lineaPart[0];
            while(letra==' '){
                lineaPart = lineaPart.substr(1);
                letra = lineaPart[0];
            }

            lineaPart[lineaPart.length()-1]='_';

            if (pruebas==1){
                cout << lineaPart << endl;

                for(int k=0; k<lineaPart.length();k++)
                    cout << k%10;
                cout << endl;
            }

            int longitud;
            for(int k=lineaPart.length()-1;k>=0; k--){
                if(lineaPart[k]=='_'){
                    longitud=k;break;
                }
            }

            int cantEspaciosFaltantes = ancho-longitud;
            while(cantEspaciosFaltantes!=0){
                for(int k=0; k<lineaPart.length(); k++){
                    if(lineaPart[k]==' '){
                        lineaPart.insert(k," ");
                        cantEspaciosFaltantes--;
                        if(cantEspaciosFaltantes==0) break;
                        if(cantEspaciosFaltantes<0) cantEspaciosFaltantes=0;
                    }
                    while(lineaPart[k]==' ' & k<lineaPart.length()){
                        k++;
                    }
                }
                if(cantEspaciosFaltantes==0) break;
            }

            lineaPart[lineaPart.length()-1]=' ';
            cout << lineaPart << endl;
            texto3 += lineaPart+"\n";
            if (pruebas==1) {
                for (int k = 0; k < lineaPart.length(); k++)
                    cout << k % 10;
                cout << endl;
            }

            if(linea.length()<=ancho){
               cout << linea << endl << endl;
         }
        parrafo=lineaPart+"\n"+linea;
        }
    }

}


#endif //TRABAJOFINAL_FUNCIONESFIN_H