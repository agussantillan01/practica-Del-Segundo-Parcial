#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<cstring>
#include <ctime>

using namespace std;
#include "funciones.h"
#include "resoluciones.h"

int main()
{
int opcion;
//PUNTO A
int kilosPorRegion[5][5]={0};
//PUNTO B
int sinExportaciones[5]={0};
//PUNTO C
int regionTotal[5]={0};
//PUNTO D
int exportacionPorRegion[5]={};
while (true){
            system("cls"); //limpia pantalla
        cout << "MENU PRINCIPAL "<< endl << "----------------------------------"<< endl;
        cout << "1 - Cargar informacion"<<endl;
        cout << "2 - PUNTO A"<<endl;
        cout << "3 - PUNTO B"<<endl;
        cout << "4 - PUNTO C"<<endl;
        cout << "5 - PUNTO D"<<endl;
        cout << "----------------------------------"<<endl;
        cout << "6 - Salir"<<endl;

        cout << endl<< "> ";
        cin>> opcion;
        system ("cls");

    switch (opcion){
        case 1:
            cargarExpo(kilosPorRegion,sinExportaciones,regionTotal,exportacionPorRegion);
            break;
        case 2:
            puntoA(kilosPorRegion);
            break;
        case 3:
            puntoB(sinExportaciones);
            break;
        case 4:
            puntoC(regionTotal);
            break;
        case 5:
            puntoD(exportacionPorRegion);
            break;
        case 6:
            cout << "GRACIAS POR USAR EL PROGRAMA!! =)"<<endl;
            return 0;
            break;
        default:
            cout << "NUMERO INGRESADO INCORRECTO"<<endl;
            break;
    }
    system("pause");
    }


    return 0;
}
