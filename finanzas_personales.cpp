#include <string>
#include<vector>
#include <iostream>
#include "io.h"
using namespace std;

int tipo, opcIngreso, opcEgreso;
double cantIngreso, sumaIngresos, sumaEgresos;
double cantEgreso;
string tipos_egresos[] {"AUTOMOVIL","CASA","COMIDA","COMUNICACIONES","ENTRETENIMIENTO","FACTURAS","HIGIENE","MASCOTAS","REGALOS","RESTAURANTES","ROPA","SALUD","TAXI","TRANSPORTES"};
string tipos_ingresos[] {"AHORRO","DEPOSITOS","SALARIOS"};
double tipo_ingreso_dinero[3], tipo_egreso_dinero[14];

int principal()
{
system("cls");
cout<<"\n\n\nFINANZAS PERSONALES ";
cout<<"\n\n\nSELECCIONE ";
cout<<"\n\n\n1:INGRESO";
cout<<"\n2:EGRESO";
cout<<"\n3:INFORMES";
cout<<"\n4: SALIR";
cout<<"\n\n\nOPCION: ";
cin>> tipo;

if (tipo == 1)
  {
   system("cls");
   cout<<"\n\n\nCANTIDAD A INGRESAR: " ;
   cin >> cantIngreso;    
   cout<<"\n\n\nTIPO DE INGRESO: ";
   cout<<"\n1. AHORRO";
   cout<<"\n2. DEPOSITOS";
   cout<<"\n3. SALARIO";
   cout<<"\n\n\nOPCION ----> ";
   cin>>opcIngreso;

      if (opcIngreso == 1 )
       {
         tipo_ingreso_dinero[0] += cantIngreso;
       }
      else if (opcIngreso == 2 )
      {
         tipo_ingreso_dinero[1] += cantIngreso;
      }

      else if (opcIngreso == 3 )
      {
        tipo_ingreso_dinero[2] += cantIngreso;
      }

      else
      {
        cout<<"\n\n\nOPCION NO VALIDA\n\n";
        system("pause");
        principal();
      }

}

else if (tipo == 2)
{
 system("cls");
   cout<<"\n\n\nCANTIDAD A EGRESAR: " ;
   cin >> cantEgreso;    
cout<<"\n\n\nCATEGORIAS: ",
cout<<"\n1. AUTOMOVIL";
cout<<"\n2. CASA";
cout<<"\n3. COMIDA";
cout<<"\n4. COMUNICACIONES";
cout<<"\n5. ENTRETENIMIENTO";
cout<<"\n6. FACTURAS";
cout<<"\n7. HIGIENE";
cout<<"\n8. MASCOTAS";
cout<<"\n9. REGALOS";
cout<<"\n10. RESTAURANTES";
cout<<"\n11. ROPA";
cout<<"\n12. SALUD";
cout<<"\n13. TAXI";
cout<<"\n14. TRANSPORTE";
cout<<"\n\n\nOPCION ----> ";
   cin>>opcEgreso;

if (opcEgreso == 1 )
       {
         tipo_egreso_dinero[0] += cantEgreso;
       }
      else if (opcEgreso == 2 )
      {
         tipo_egreso_dinero[1] += cantEgreso;
      }

      else if (opcEgreso == 3 )
      {
        tipo_egreso_dinero[2] += cantEgreso;
      }

      else if (opcEgreso == 4 )
      {
         tipo_egreso_dinero[3] += cantEgreso;
      }

      else if (opcEgreso == 5 )
      {
        tipo_egreso_dinero[4] += cantEgreso;
      }

      else if (opcEgreso == 6 )
      {
         tipo_egreso_dinero[5] += cantEgreso;
      }

      else if (opcEgreso == 7 )
      {
        tipo_egreso_dinero[6] += cantEgreso;
      }

      else if (opcEgreso == 8 )
      {
         tipo_egreso_dinero[7] += cantEgreso;
      }

      else if (opcEgreso == 9 )
      {
        tipo_egreso_dinero[8] += cantEgreso;
      }

      else if (opcEgreso == 10 )
      {
         tipo_egreso_dinero[9] += cantEgreso;
      }

      else if (opcEgreso == 11 )
      {
        tipo_egreso_dinero[10] += cantEgreso;
      }

      else if (opcEgreso == 12 )
      {
         tipo_egreso_dinero[11] += cantEgreso;
      }

      else if (opcEgreso == 13 )
      {
        tipo_egreso_dinero[12] += cantEgreso;
      }
      
      else if (opcEgreso == 14 )
      {
         tipo_egreso_dinero[13] += cantEgreso;
      }
      else
      {
        cout<<"\n\n\nOPCION NO VALIDA\n\n";
        system("pause");
        principal();
      }
}

else if (tipo == 3)
{
    system("cls");
    cout<< "\n\n\nINFORMES INGRESOS\n\n\n";
    for (int i = 0; i < 3; i++)
    {
      if (tipo_ingreso_dinero[i] != 0)
      {
      cout<< "\n" << tipos_ingresos[i] << "==================> " << tipo_ingreso_dinero [i] << "\n";
      sumaIngresos += tipo_ingreso_dinero[i];
    }

    }
    cout << "\n\n\nTOTAL DE INGRESOS :  " << sumaIngresos << "\n\n\n";
   
    cout<< "\n\n\nINFORMES EGRESOS\n\n\n";
    for (int i = 0; i < 15; i++)
    {
      if (tipo_egreso_dinero[i] != 0)
      {
      cout<< "\n" << tipos_egresos[i] << "==================> " << tipo_egreso_dinero [i] << "\n";
      sumaEgresos += tipo_egreso_dinero[i];
    }

    }
    cout << "\n\n\nTOTAL DE EGRESOS :  " << sumaEgresos ;
    cout <<"\n\n\nSALDO : " << sumaIngresos - sumaEgresos <<"\n\n\n" ;
    system("\n\n\npause");

}

else if (tipo == 4)
return 0;

else

{
cout<<"\n\n\n\n\n\nOPCION INCORRECTA";
system("pause");
principal();
}
principal();
return 0;

}


int main()
{
system("cls");

principal();


    return 0;
}