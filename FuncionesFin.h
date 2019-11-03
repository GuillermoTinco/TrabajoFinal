#ifndef TRABAJOFINAL_FUNCIONESFIN_H
#define TRABAJOFINAL_FUNCIONESFIN_H

#include "Variablesnat.h"
#include <fstream>
#include <stdlib.h>
#include <windows.h>
#include <vector>
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
    cout << "tmr" << contador;
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
nada gotoxy(int x, int y){
    HANDLE Manipulador;
    COORD Coordenadas;
    Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
    Coordenadas.X = x;
    Coordenadas.Y = y;
    SetConsoleCursorPosition(Manipulador, Coordenadas);
}
nada Centrar_Texto(const char *texto4, int y){
    int size_Texto = strlen(texto4);
    gotoxy(40 - (size_Texto/2), y);
    printf("%s", texto4);
}


#endif //TRABAJOFINAL_FUNCIONESFIN_H