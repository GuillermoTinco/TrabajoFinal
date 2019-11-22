#include "Editor.h" // usando este explicitamente uso variables.h ya qu esta incluida en editor.h
#include "funcmain.h"
entero main() {
    entero a=0;
    cadena ubicac="C:\\Users\\HP\\ARCHIVOS\\Prueba1.txt";
    cout << "Ingrese la ubicacion del archivo para editar lo deseado:" << "\n"; cin >> ubicac;
    do{
        EditorTexto Interfaz;
        Interfaz.Dibujar(); //se encargará de hacer la interface sabiedno que a es 0
        cout << "Ingrese opcion: "; cin >> a;
        EditorTexto Opcion(a, ubicac); cout << endl; // el a si asigna y cambia el valor al private
        funcionsui(Opcion, ubicac);
        cout << endl; cout << endl;
    }
    while (a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8 || a==9 || a==10 || a== 11);
    cout << "Fin";
    return 0;
}