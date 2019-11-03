#include "Editor.h"
#include "FuncionesFin.h"
EditorTexto::EditorTexto() {
    // asignarle valor 0 para que la interface trabaje con ese
    this->opcion=0;
    this->ubicac="";
}
EditorTexto::EditorTexto(entero opcion, cadena ubicac){
    this->opcion=opcion;
    this->ubicac=ubicac;
}
nada EditorTexto::Runcasouno(cadena ubicac) {
    string line;
    ifstream miarchivo(ubicac); //para leer el archivo
    vector<string> Lineas;
    if(miarchivo.is_open()){
        while(getline(miarchivo,line)){//getline lee las lineas del texto
            Lineas.push_back(line);
        }
        miarchivo.close();
    }
    for(int i=0; i< Lineas.size(); i++){
        cout << Lineas[i] << endl;
    }

} //Listo!!!
nada EditorTexto::Runcasodos() {
    ofstream miarchivo("C:\\Users\\HP\\ARCHIVOS\\Auxiliar.txt");//para escribir en el archivo
    string texto;
    cout <<"Ingrese el texto, cuando finalice ingrese 'XX': "<<endl;
    if(miarchivo.is_open())
    {
        do{
            cin.ignore();
            getline(cin, texto);
            if(texto == "X"){
                break;
            }
            else{
                miarchivo << texto <<endl;
            }
        }
        while(texto!="X");
    }
    miarchivo.close();
}//Listo!!!
nada EditorTexto::Runcasotres(cadena ubicac) {} //
nada EditorTexto::Runcasocuatro(cadena ubicac) {} //
nada EditorTexto::Runcasocinco(cadena ubicac) {} //
nada EditorTexto::Runcasoseis(cadena ubicac) {} //
nada EditorTexto::Runcasosiete(cadena ubicac) {
    cadena palabra7, texto7,txt7;
    ifstream archivo(getUbicac());
    ifstream inutil(ubicac);
    entero numLines=numlineas(inutil);
    //cout << numLines; === 8
    //cout << archivo.eof(); === no vale
    cout<<"Ingrese la palabra que desea buscar: ";
    cin>>palabra7;
    if(!archivo.is_open()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    entero i=0;
    while(i < numLines){
        //necesito encontrar la cantidad de lineas, listo
        getline(archivo,txt7);
        texto7+=("\n"+txt7);
        i++;
    }
    if(palabra_en_texto(texto7,palabra7))
        cout<<"La palabra se encuentra en el texto.";
    else
        cout<<"La palabra no se encuentra en el texto.";

    archivo.close();

} //Listo!!!!
nada EditorTexto::Runcasoocho() {
    cadena palabra8, texto8,txt8,reemplazo8;
    ifstream archivo(getUbicac());
    ifstream inutil(getUbicac()); //otro archivo para poder sacar el num de lineas sin afectar al archivo
    entero numLines=numlineas(inutil); //numero de lineas del documento
    cout<<"Ingrese la palabra que desea reemplazar: ";
    cin>>palabra8;
    cout<<"Ingrese el reemplazo: ";
    cin>>reemplazo8;
    //apertura del archivo
    //verificación de que el archivo se abrió con éxito
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    //llenado de la variable texto con el archivo
    entero i=0;
    while(i < numLines){
        if(i<numLines-1){
            getline(archivo,txt8);
            texto8+=txt8+"\n";}
        //while else creado para que no añada una linea en blanco al final
        else{
            getline(archivo,txt8);
            texto8+=txt8;
        }
        i++;
    }
    reemplazar_palabra(texto8,palabra8,reemplazo8);
    cout<<texto8;//la variable texto contiene el archivo modificado
    ofstream archivoescribir("C:\\Users\\HP\\ARCHIVOS\\Auxiliar.txt"); //para escribir en el archivo
    if(archivoescribir.is_open()){
    archivoescribir << texto8;}
    archivo.close();
    archivoescribir.close();
} //Listo!!!
nada EditorTexto::Runcasonueve(cadena ubicac) {
    cadena palabra9, texto9,txt9;
    ifstream archivo(getUbicac());
    ifstream inutil(ubicac); //otro archivo para poder sacar el num de lineas sin afectar al archivo
    entero numLines=numlineas(inutil); //numero de lineas del documento
    cout<<"Ingrese la palabra que desea buscar: ";
    cin>>palabra9;
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    entero i=0;
    while(i<numLines){
        getline(archivo,txt9);
        texto9+=("\n"+txt9);
        i++;
    }
    cout<<"La palabra se encuentra "<< palabras_en_texto(texto9,palabra9)<<" veces en el texto "<<endl;

    archivo.close();

} //Listo!!!
nada EditorTexto::Runcasodiez() {
    cadena texto10,txt10;
    ofstream archivo(getUbicac());
    ifstream inutil("C:\\Users\\HP\\ARCHIVOS\\Auxiliar.txt");
    ifstream auxiliar("C:\\Users\\HP\\ARCHIVOS\\Auxiliar.txt");
    entero numLines=numlineas(inutil);
    //cout << numLines; === 8
    //cout << archivo.eof(); === no vale
    if(!archivo.is_open()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    entero i=0;
    while(i < numLines){
        if(i<numLines-1){
            getline(auxiliar,txt10);
            texto10+=(txt10+"\n");}
            //while else creado para que no añada una linea en blanco al final
        else{
            getline(auxiliar,txt10);
            texto10+=txt10;
        }
        i++;
    }
    archivo << texto10 <<endl;
    cout << "Archivo guardado como .txt";
    archivo.close();
} //Listo!!!
nada EditorTexto::Runcasoonce(cadena ubicac) {
    cadena texto11,txt11, direcpdf1, direcpdf2, direcpdf3, textopdf;
    cout << "Ingrese el nombre como lo quiere guardar: ";cin >> direcpdf1;
    //crear aca en archivo txt
    direcpdf2 = "C:\\Users\\HP\\textosparapd\\" + direcpdf1 + ".txt";
    direcpdf3 = "C:\\Users\\HP\\ARCHIVOS\\PDFs\\" + direcpdf1 + ".rb";
    ofstream archivotxt(direcpdf2);
    ofstream archivopdf(direcpdf3);
    ifstream inutil(ubicac);
    ifstream auxiliar(ubicac);
    entero numLines=numlineas(inutil);
    //cout << numLines; === 8
    //cout << archivo.eof(); === no vale
    if(!auxiliar.is_open()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    entero i=0;
    while(i < numLines){
        if(i<numLines-1){
            getline(auxiliar,txt11);
            texto11+=(txt11+"\n");}
            //while else creado para que no añada una linea en blanco al final
        else{
            getline(auxiliar,txt11);
            texto11+=txt11;
        }
        i++;
    }
    textopdf = "require 'prawn'\n\nwords='"+arcomillas(texto11)+"'\nPrawn::Document.generate('" + direcpdf1 + ".pdf') do |pdf|\n   pdf.text words\nend";
    archivotxt << textopdf <<endl;
    archivopdf << textopdf <<endl;
    cout << "Archivo .txt guardado como .pdf";
    auxiliar.close();
} //Listo!!!
nada EditorTexto::Dibujar(){
    //  hacer td el trabajo de la interface
    //está en elarchivo frame de poo
    cout <<
         "*--------------------------------------------------------------*" << endl <<
         "|                                                              |" << endl <<
         "|                     "<< getNombrePrograma() << "                          |" << endl <<
         "|                                                              |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasouno() <<"                                           |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasodos() <<"                                     |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasotres() <<"                           |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasocuatro() <<"                 |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasocinco() <<"               |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasoseis() <<"                              |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasosiete() <<"                          |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasoocho() <<"                        |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasonueve() <<"   |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasodiez() <<"                             |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         "| "<< getCasoonce() <<"                             |" << endl <<
         "*--------------------------------------------------------------*" << endl <<
         " 0. Salir" << endl;
} //Listo