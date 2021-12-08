#include <iostream>
#include "io.h"
using namespace std;

int cuenta,num_cuenta1,num_cuenta2,num_cuenta3,num_cuenta4;
int NIP,NIP1,NIP2,NIP3,NIP4, retiro, deposito, cuenta_transferir, transferencia;
char x;
double saldo1= 10000, saldo2 = 20000, saldo3 = 30000, saldo4 = 40000;
bool bandera1(0), bandera2(0), bandera3(0), bandera4(0);

#ifdef _WIN32
  #include<windows.h>
#endif  

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}


int submenu()
{
int opcion;
limpiar_pantalla();
cout<<"\nBIENVENIDO BANCO SINALOENSE ";
cout<<"\n\n\n\n1: CONSULTA DE SALDO";
cout<<"\n2: DEPOSITO A CUENTA";
cout<<"\n3: RETIRO DE EFECTIVO";
cout<<"\n4: TRANSFERENCIA A OTRA CUENTA";
cout<<"\n5: SALIR";
cout<<"\n\n\nELIJA OPCION --------->  ";
cin>>opcion;

if (opcion == 1)
       { 
           if (bandera1 == 1)
            {
              cout<<"\n\n\n\n\n\nSU SALDO ES  :  $" << saldo1 <<"\n\n ";
              system("\n\n\npause");
            }
           else if (bandera2 == 1)
           {
              cout<<"\n\n\n\n\n\nSU SALDO ES  :  $" << saldo2 <<"\n\n";
              system("\n\n\npause");
           }
           else if (bandera3 == 1)
           {
              cout<<"\n\n\n\n\n\nSU SALDO ES  :  $" << saldo3 << "\n\n";
              system("\n\n\npause");
           }
          else if (bandera4 == 1)
           {
             cout<<"\n\n\n\n\n\nSU SALDO ES  :  $" << saldo4 << "\n\n";
             system("\n\n\npause");
           }   
         submenu();
        }
      else if (opcion == 2)
        {
           if (bandera1 == 1)
             {
               cout<<"\n\n\n\n\n\nCANTIDAD A DEPOSITAR  :  ";
               cin>> deposito;
               saldo1 = deposito + saldo1;
             }
          
           else if (bandera2 == 1)
             {
             cout<<"\n\n\n\n\n\nCANTIDAD A DEPOSITAR  :  ";
             cin>> deposito;
             saldo2 = deposito + saldo2;
             }
           else if (bandera3 == 1)
             {
              cout<<"\n\n\n\n\n\nCANTIDAD A DEPOSITAR  :  ";
              cin>> deposito;
              saldo3 = deposito + saldo3;
             }
            else if (bandera4 == 1)
            {
              cout<<"\n\n\n\n\n\nCANTIDAD A DEPOSITAR  :  ";
              cin>> deposito;
              saldo4 = deposito + saldo4;
            }   
    submenu();
    }

      else if (opcion == 3)
      {
         if (bandera1 == 1)
           {
              cout<<"\n\n\n\n\n\nCANTIDAD A RETIRAR  :  $";
              cin>> retiro;
              if (retiro>saldo1)
              {
              cout<<"\n\n\nCANTIDAD EXCEDE SALDO\n\n\n";
                system("\n\n\npause");
                submenu();
              }
              else{
              saldo1 = saldo1 - retiro;   
              }
           }
          else if (bandera2 == 1)
          {
              cout<<"\n\n\n\n\n\nCANTIDAD A RETIRAR  :  $";
              cin>> retiro;
               if (retiro>saldo2)
              {
              cout<<"\n\n\nCANTIDAD EXCEDE SALDO\n\n\n";
                system("\n\n\npause");
                submenu();
              }
              else{
              saldo2 = saldo2 - retiro;   
              }
              //saldo2 = saldo2 - retiro;
          }
          else if (bandera3 == 1)
         {
              cout<<"\n\n\n\n\n\nCANTIDAD A RETIRAR  :  $";
              cin>> retiro;
               if (retiro>saldo3)
              {
                cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                system("\n\n\npause");
                submenu();
              }
              else{
              saldo3 = saldo3 - retiro;   
              }
              //saldo3 = saldo3 - retiro;
          }
         else if (bandera4 == 1)
          {
              cout<<"\n\n\n\n\n\nCANTIDAD A RETIRAR  :  $";
              cin>> retiro;
               if (retiro>saldo4)
              {
                cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                system("\n\n\npause");
                submenu();
              }
              else{
              saldo4 = saldo4 - retiro;   
              } 
              //saldo4 = saldo4 - retiro;
          }   
  submenu();
}
      
    else  if (opcion == 4)
    {
          if (bandera1 == 1)
          {
             cout <<"\n\n\n\nCuenta a transferir saldo: ";
             cin>>cuenta_transferir;
               
                if (cuenta_transferir == num_cuenta2)
                {
                  cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia>saldo1)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                  {
                  saldo2 = saldo2 + transferencia;
                  saldo1 = saldo1 - transferencia;
                  cout<<"\n\n\nTu nuevo saldo es: $" <<saldo1 <<"\n\n\n";
                  system("pause");
                  submenu();
                  }
                }

                  else if (cuenta_transferir == num_cuenta3) 
                  {
                  cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia>saldo1)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                    {
                      saldo3 = saldo3 + transferencia;
                      saldo1 = saldo1 - transferencia;
                      cout<<"\n\n\nTu nuevo saldo es: $" <<saldo1 << "\n\n\n";
                      system("pause");
                     submenu();
                    }
                  }
                
                  else if (cuenta_transferir == num_cuenta4) 
                  {
                     cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia>saldo1)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                  {
                  saldo4 = saldo4 + transferencia;
                  saldo1 = saldo1 - transferencia;
                  cout<<"\n\n\nTu nuevo saldo es: $" <<saldo1 << "\n\n\n";
                  system("pause");
                  submenu();
                  } 
                  }
                  else 
                  {
                    cout<<"INGRESE CUENTA CORRECTA\n\n\n";
                    system("pause");
                    submenu();
                  }

          }
          if (bandera2 == 1)
          {
             cout <<"\n\n\n\nCuenta a transferir saldo: ";
             cin>>cuenta_transferir;
               
                if (cuenta_transferir == num_cuenta1)
                {
                  cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia>saldo2)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                  {
                  saldo1 = saldo1 + transferencia;
                  saldo2 = saldo2 - transferencia;
                  cout<<"\n\n\nTu nuevo saldo es: $" <<saldo2 << "\n\n\n";
                  system("pause");
                  submenu();
                  }
                }
                  else if (cuenta_transferir == num_cuenta3) 
                  {
                     cout<<"\n\n\nMonto a transferir: $";
                     cin>>transferencia;
                     if (transferencia>saldo2)
                     {
                        cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                        system("pause");
                        submenu();
                     }
                     else
                     {
                     saldo3 = saldo3 + transferencia;
                     saldo2 = saldo2 - transferencia;
                     cout<<"\n\n\nTu nuevo saldo es: $" <<saldo2 << "\n\n\n";
                     system("pause");
                     submenu();
                     }
                  }
                
                  else if (cuenta_transferir == num_cuenta4) 
                  {
                     cout<<"\n\n\nMonto a transferir: $";
                     cin>>transferencia;
                     if (transferencia>saldo2)
                     {
                        cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                        system("pause");
                        submenu();
                     }
                     else
                     {
                     saldo4 = saldo4 + transferencia;
                     saldo2 = saldo2 - transferencia;
                     cout<<"\n\n\nTu nuevo saldo es: $" <<saldo2 << "\n\n\n";
                     system("pause");
                     submenu();
                     } 
                  }
                  else 
                  {
                    cout<<"INGRESE CUENTA CORRECTA\n\n\n";
                    system("pause");
                    submenu();
                  }
          }
          if (bandera3 == 1)
          {
             cout <<"\n\n\n\nCuenta a transferir saldo: ";
             cin>>cuenta_transferir;
               
                if (cuenta_transferir == num_cuenta1)
                {
                  cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                   if (transferencia>saldo3)
                   {
                      cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                      system("pause");
                      submenu();
                   }
                   else
                   {
                     saldo1 = saldo1 + transferencia;
                     saldo3 = saldo3 - transferencia;
                     cout<<"\n\n\nTu nuevo saldo es: $" <<saldo3 << "\n\n\n";
                     system("pause");
                     submenu();
                   }
                }
                  else if (cuenta_transferir == num_cuenta2) 
                  {
                     cout<<"\n\n\nMonto a transferir: $";
                     cin>>transferencia;
                     if (transferencia>saldo3)
                     {
                        cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                        system("pause");
                        submenu();
                     }
                     else
                     {
                       saldo2 = saldo2 + transferencia;
                       saldo3 = saldo3 - transferencia;
                       cout<<"\n\n\nTu nuevo saldo es: $" <<saldo3 << "\n\n\n";
                       system("pause");
                       submenu();
                     }  
                  }
                
                  else if (cuenta_transferir == num_cuenta4) 
                  {
                     cout<<"\n\n\nMonto a transferir: $";
                     cin>>transferencia;
                     if (transferencia>saldo3)
                     {
                        cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                        system("pause");
                        submenu();
                     }
                     else
                     {
                       saldo4 = saldo4 + transferencia;
                       saldo3 = saldo3 - transferencia;
                       cout<<"\n\n\nTu nuevo saldo es: $" <<saldo3 << "\n\n\n";
                       system("pause");
                       submenu();
                     }
                  } 
                  else 
                  {
                    cout<<"INGRESE CUENTA CORRECTA\n\n\n";
                    system("pause");
                    submenu();
                  }
          }
           if (bandera4 == 1)
          
          {
             cout <<"\n\n\n\nCuenta a transferir saldo: ";
             cin>>cuenta_transferir;
               
                if (cuenta_transferir == num_cuenta1)
                {
                  cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia > saldo4)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                  {
                    saldo1 = saldo1 + transferencia;
                    saldo4 = saldo4 - transferencia;
                    cout<<"\n\n\nTu nuevo saldo es: $" <<saldo4 << "\n\n\n";
                    system("pause");
                    submenu();
                  }
                }
                  else if (cuenta_transferir == num_cuenta2) 
                  {
                  cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia > saldo4)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                    {
                     saldo2 = saldo2 + transferencia;
                     saldo4 = saldo4 - transferencia;
                     cout<<"\n\n\nTu nuevo saldo es: $" <<saldo4 << "\n\n\n";
                     system("pause");
                     submenu();
                    }
                  }
                
                  else if (cuenta_transferir == num_cuenta3) 
                  {
                     cout<<"\n\n\nMonto a transferir: $";
                  cin>>transferencia;
                  if (transferencia> saldo4)
                  {
                     cout<<"\n\n\nCANTIDAD EXCEDE SALDO \n\n\n";
                     system("pause");
                     submenu();
                  }
                  else
                    {
                      saldo3 = saldo3 + transferencia;
                      saldo4 = saldo4 - transferencia;
                      cout<<"\n\n\nTu nuevo saldo es: $" <<saldo4 << "\n\n\n";
                      system("pause");
                      submenu();
                    } 
                  } 
                  else 
                  {
                    cout<<"INGRESE CUENTA CORRECTA\n\n\n";
                    system("pause");
                    submenu();
                  }       

          }

    }     
      
          
      else if (opcion == 5)
      {
        limpiar_pantalla();
        return 0;
      }  
else
{
  cout<<"\n\n\nINGRESE OPCION VALIDA\n\n\n";
  system("pause");
  submenu();
}
return 0;
}




int menu_principal()
{
  
bandera1 = 0;
bandera2 = 0;
bandera3 = 0;
bandera4 = 0;
num_cuenta1 = 8835;
num_cuenta2 = 8845;
num_cuenta3 = 8855;
num_cuenta4 = 8865;
NIP1 = 1234;
NIP2 = 2345;
NIP3 = 3456;
NIP4 = 4567;
cout<<"\t=============================";
cout<<"\n        BIENVENIDO A BANCO SINALOENSE";
cout<<"\n        =============================";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"\nINGRESE SU NUMERO DE CUENTA: ------> ";
cin>>cuenta;
cout<<"\nINGRESE SU NIP: -------------------> ";
//cout<<"\n\n\n\n\n\n\nCTRL + C ----> SALIR";

cin>>NIP;

if (cuenta == num_cuenta1 and NIP == NIP1)
{
bandera1 = 1;
cout<<"\nBIENVENIDO PEDRO PARAMO\n\n\n";
cout<<"\nPRESIONE UNA TECLA PARA CONTINUAR\n";

system("pause");

submenu();

}

else if (cuenta == num_cuenta2 and NIP == NIP2)
{
bandera2 = 1;
cout<<"\nBIENVENIDO ANA RENTERIA\n\n\n";
cout<<"\nPRESIONE UNA TECLA PARA CONTINUAR\n";
system("pause");
submenu();
}

else if (cuenta == num_cuenta3 and NIP == NIP3)
{
bandera3 = 1;  
cout<<"\nBIENVENIDO PITO PEREZ\n\n\n";
cout<<"\nPRESIONE UNA TECLA PARA CONTINUAR\n";
system("pause");
submenu();
}

else if (cuenta == num_cuenta4 and NIP == NIP4)
{
bandera4 = 1;
cout<<"\nBIENVENIDO JUAN PRECIADO\n\n\n";
cout<<"\nPRESIONE UNA TECLA PARA CONTINUAR\n";
system("pause");
submenu();
}

else 
{
cout<<"\nERROR DE CUENTA, INGRESELO NUEVAMENTE\n";
cout<<"\nPRESIONE CUALQUIER TECLA PARA CONTINUAR......\n\n",
system("pause");
limpiar_pantalla();
menu_principal();
}
 menu_principal (); 
return 0;

}


//void validar_cuenta(){

//}

int main()
{
limpiar_pantalla();
menu_principal();
return 0;
}

