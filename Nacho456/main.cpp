#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <string>
using namespace std;

#define MAX 1000

void substring(char *cadena, char *subcadena, int inicio, int longitud)
{
    int i;

    for(i=0; i < longitud && inicio+i < strlen(cadena); i++)
        subcadena[ i ] = cadena[ inicio+i ];

    subcadena[ i ] = '\0';
}

void centrar_linea(char *linea, int ancho)
{
    int i, espacios;
    espacios = (ancho - strlen(linea)) / 2;

    for(i=0; i < espacios; i++)
        printf(" ");

    printf("%s", linea);
}

void derecha_linea(string & lineatextode, char *linea, int ancho)
{
    int i, espacios;
    espacios = ancho - strlen(linea);

    for(i=0; i < espacios; i++){
        printf(" ");
        lineatextode+=' ';
    }
    lineatextode+=linea;
    printf("%s", linea);
}

void centrar_cadena(char *cadena, int ancho)
{
    char subcadena[MAX];
    int i, total;

    total = (int)ceil((float)strlen(cadena) / ancho);

    for(i=0; i < total; i++)
    {
        substring(cadena, subcadena, i*ancho, ancho);
        centrar_linea(subcadena, ancho);
    }
}

void derecha_cadena(char *cadena, int ancho)
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
}

/*
 * if (i%n==0 && texto[i] == ' '){
            cont+=1;
            for (int j=(i-n*(cont)); j<i; j++){
                textof += texto[j];
            }
            textof += '\n';
        }
        if (i%n==0 && texto[i] != ' '){

        }
 */
int main()
{}


