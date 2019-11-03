#ifndef TRABAJOFINAL_FUNCMAIN_H
#define TRABAJOFINAL_FUNCMAIN_H

nada funcionsui(EditorTexto Opcion, cadena ubicac){
    switch (Opcion.getOpcion()){
        case 1:
            Opcion.Runcasouno(ubicac);
            break;
        case 2:
            Opcion.Runcasodos();
            break;
        case 3:
            Opcion.Runcasotres(ubicac);
            break;
        case 4:
            Opcion.Runcasocuatro(ubicac);
            break;
        case 5:
            Opcion.Runcasocinco(ubicac);
            break;
        case 6:
            Opcion.Runcasoseis(ubicac);
            break;
        case 7:
            Opcion.Runcasosiete(ubicac);
            break;
        case 8:
            Opcion.Runcasoocho();
            break;
        case 9:
            Opcion.Runcasonueve(ubicac);
            break;
        case 10:
            Opcion.Runcasodiez();
            break;
        case 11:
            Opcion.Runcasoonce(ubicac);
    }
}
#endif //TRABAJOFINAL_FUNCMAIN_H
