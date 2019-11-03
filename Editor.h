#ifndef TRABAJOFINAL_EDITOR_H
#define TRABAJOFINAL_EDITOR_H

#include <fstream> // libreria que permite hacer tdo con files
#include "Variablesnat.h" // los using y typedf además de la libreria iostream
#include <stdlib.h>
#include <windows.h>
class EditorTexto
{
private:

    letras NombrePrograma="EDITOR DE TEXTO";
    entero opcion;
    cadena ubicac;
    letras casouno="1. Leer el archivo"; //18
    letras casodos="2. Reescribir el archivo"; //24
    letras casotres="3. Justificar el texto del archivo"; //34 +2
    letras casocuatro="4. Alinear a la derecha el texto del archivo"; //46 +2
    letras casocinco="5. Alinear a la izquierda el texto del archivo"; //48 +2
    letras casoseis="6. Centrar el texto del archivo"; //33 +2
    letras casosiete="7. Buscar una palabra en el archivo"; //35
    letras casoocho="8. Reemplazar una palabra del archivo"; //37
    letras casonueve="9. Cantidad de veces que aparece una palabra en el archivo"; //58
    letras casodiez="10. Guardar el archivo como .txt"; //30
    letras casoonce="11. Guardar el archivo como .pdf"; //30


public:

    //constructor vacio, se encargará de construir
    EditorTexto();
    //constructor con parametro igual a la opción a elegir
    EditorTexto(entero opcion, cadena ubicac);
    //se encargará de la interface(metodos)
    nada Dibujar();
    nada Runcasouno(cadena ubicac); //como parametro el archivo
    nada Runcasodos();
    nada Runcasotres(cadena ubicac);
    nada Runcasocuatro(cadena ubicac);
    nada Runcasocinco(cadena ubicac);
    nada Runcasoseis(cadena ubicac);
    nada Runcasosiete(cadena ubicac);
    nada Runcasoocho();
    nada Runcasonueve(cadena ubicac);
    nada Runcasodiez();
    nada Runcasoonce(cadena ubicac);
    //getters
    entero getOpcion(){return opcion;}
    cadena getNombrePrograma(){return NombrePrograma;}
    cadena getCasouno(){return casouno;}
    cadena getCasodos(){return casodos;}
    cadena getCasotres(){return casotres;}
    cadena getCasocuatro(){return casocuatro;}
    cadena getCasocinco(){return casocinco;}
    cadena getCasoseis(){return casoseis;}
    cadena getCasosiete(){return casosiete;}
    cadena getCasoocho(){return casoocho;}
    cadena getCasonueve(){return casonueve;}
    cadena getCasodiez(){return casodiez;}
    cadena getCasoonce(){ return casoonce;}
    cadena getUbicac(){return ubicac;}
};

#endif //TRABAJOFINAL_EDITOR_H
