#ifndef RESOLUCIONES_H_INCLUDED
#define RESOLUCIONES_H_INCLUDED
void cargarExpo(int kilosPorRegion[5][5], int sinExportaciones[5], int regionTotal[5], int exportacionPorRegion[5]){
    int nExpo,region, producto,x,x2,toneladas;
    float kilos, importe;

cout << "INGRESAR: "<<endl;
cout<< "Numero de exportacion:  ";
cin >> nExpo;
while (nExpo !=0){
    cout << endl<< "Region (1-Noroeste/ 2-Nordeste/ 3-Pampeana/ 4-Cuyo/ 5-Patagonia):  ";
    cin>> region;
    //en caso de que se ingrese un numero de region incorrecto, lo valido.
    while(region<0 || region>5){
        cout << "ERROR- NUMERO INCORRECTO"<<endl<< "Ingrese el numero de region: ";
        cin>>region;

    }
    cout<< endl<<"Producto(1-Limón/ 2-Yerba mate/ 3-Manzana/ 4-Durazno/ 5-Té):  ";
    cin >>producto;
    //En caso de que se ingrese un numero de producto incorrecto, lo valido
    while (producto<0 || producto>5){
        cout << "ERROR- NUMERO INCORRECTO"<<endl<< "Ingrese el numero de producto:  ";
        cin>>region;
    }
    cout << endl<< "Cantidad de kilos:  kg ";
    cin>> kilos;
    /// PUNTO A
    //una vez que obtengo los kilos, puedo acumular en el vector de region... para cada region le voy acumulando la cantidad de kilos
    toneladas= kilos*1000;
        kilosPorRegion[region-1][producto-1]+=toneladas;

    ///PUNTO B
    //por cada poducto en la region pampeana le sumo uno.... Luego pregunto los productos que estan en 0
    if (region ==3){
        sinExportaciones[producto-1]++;
    }

    ///PUNTO C
    //primero acumulo todos los kilos por cada region(sin importar el producto)... Luego calculo el mayor
        regionTotal[region-1]+=kilos;


    cout<< endl<< "Importe:  $ ";
    cin>> importe;
    ///PUNTO D
    //primero recorro el numero de region y en cada uno, pregunto si el importe es mayor a 5000, le sumo uno
        if (importe>5000){
            exportacionPorRegion[region-1]+=1;
        }

system("cls");
cout<< endl<<"Numero de exportacion:  ";
cin >> nExpo;
}


}

/// DESARROLLO PUNTO A
void puntoA (int kilosPorRegion[5][5]){
    int x, x2;
    for (x=0; x<5; x++){
        cout <<endl<< "REGION "<< x+1 << endl;
        for (x2=0; x2<5; x2++){
            cout << endl<<"Producto " << x2+1 << "=>  Tn "<< kilosPorRegion[x][x2];
        }

    }
}

/// DESARROLLO PUNTO B
void puntoB (int sinExportaciones[]){
    int x;
    cout << "REGION PAMPEANA: "<<endl<< "Productos sin exportaciones: "<<endl;
    for (x=0; x<5; x++){
        if (sinExportaciones[x]==0){
            cout << x+1<<endl;
        }
    }
}

///DESARROLLO PUNTO C
void puntoC (int regionTotal[]){
int pos,posmax;
pos=cantMaximo(regionTotal,5);
cout<< "LA REGION QUE MAS EXPORTO ES: ";
posmax=pos+1;
cout<< posmax<<endl;
}

//funcion del punto c
int cantMaximo (int v[],int tam){
    int mayor,x;
    mayor=0;
    for (x=1; x<5; x++){
        if (v[x]>v[mayor]){
            mayor=x;;
        }
    }

    return mayor;
}

///DESARROLLO PUNTO D
void puntoD(int exportacionPorRegion[]){
    int x,x2;
    cout << "La cantidad de exportacion con un valor de mas de $5000: "<<endl;
    for (x=1; x<=5; x++){
        cout << "REGION "<< " : "<<x<<endl;
            cout<< exportacionPorRegion[x-1];
        cout << endl;
    }
}


#endif // RESOLUCIONES_H_INCLUDED
