#include <iostream>
#include "io.h"
using namespace std;

int main()
{
double numero, centavos;
string letra;
cout <<"\n\n\nINGRESE NUMERO A COVERTIR:  "; cin >> numero;
int num_entero = (int) numero;

if (num_entero >= 0 and num_entero <=999999)
{ 

if(num_entero>900000)    {letra += "NOVECIENTOS MIL  "    ;num_entero=num_entero-900000;}
if(num_entero==900000)    {letra += "NOVECIENTOS MIL  "    ;num_entero=num_entero-900000;}
if(num_entero>800000)    {letra += "OCHOCIENTOS "    ;num_entero=num_entero-800000;}
if(num_entero==800000)    {letra += "OCHOCIENTOS MIL "    ;num_entero=num_entero-800000;}
if(num_entero>700000)    {letra += "SETECIENTOS "    ;num_entero=num_entero-700000;}
if(num_entero==700000)    {letra += "SETECIENTOS MIL "    ;num_entero=num_entero-700000;}
if(num_entero>600000)    {letra += "SEICIENTOS "    ;num_entero=num_entero-600000;}
if(num_entero==600000)    {letra += "SEICIENTOS MIL "    ;num_entero=num_entero-600000;}
if(num_entero>500000)    {letra += "QUINIENTOS "    ;num_entero=num_entero-500000;}
if(num_entero==500000)    {letra += "QUINIENTOS MIL "    ;num_entero=num_entero-500000;}
if(num_entero>400000)    {letra += "CUATROCIENTOS "    ;num_entero=num_entero-400000;}
if(num_entero==400000)    {letra += "CUATROCIENTOS MIL "    ;num_entero=num_entero-400000;}
if(num_entero>300000)    {letra += "TRECIENTOS "    ;num_entero=num_entero-300000;}
if(num_entero==300000)    {letra += "TRECIENTOS MIL "    ;num_entero=num_entero-300000;}
if(num_entero>200000)    {letra += "DOCIENTOS "    ;num_entero=num_entero-200000;}
if(num_entero==200000)    {letra += "DOCIENTOS MIL "    ;num_entero=num_entero-200000;}
if(num_entero>=100000)    {letra += "CIENTO "    ;num_entero=num_entero-100000;}
if(num_entero==100000)    {letra += "CIEN MIL "    ;num_entero=num_entero-100000;}
if(num_entero>90000)    {letra += "NOVENTA  "    ;num_entero=num_entero-90000;}
if(num_entero==90000)    {letra += "NOVENTA MIL "    ;num_entero=num_entero-90000;}
if(num_entero>80000)    {letra += "OCHENTA  "    ;num_entero=num_entero-80000;}
if(num_entero>=80000)    {letra += "OCHENTA MIL "    ;num_entero=num_entero-80000;}
if(num_entero>70000)    {letra += "SETENTA  "    ;num_entero=num_entero-70000;}
if(num_entero==70000)    {letra += "SETENTA MIL "    ;num_entero=num_entero-70000;}
if(num_entero>60000)    {letra += "SESENTA  "    ;num_entero=num_entero-60000;}
if(num_entero==60000)    {letra += "SESENTA MIL "    ;num_entero=num_entero-60000;}
if(num_entero>50000)    {letra += "CINCUENTA "    ;num_entero=num_entero-50000;}
if(num_entero==50000)    {letra += "CINCUENTA MIL "    ;num_entero=num_entero-50000;}
if(num_entero>40000)    {letra += "CUARENTA "    ;num_entero=num_entero-40000;}
if(num_entero==40000)    {letra += "CUARENTA MIL "    ;num_entero=num_entero-40000;}
if(num_entero>30000)    {letra += "TREINTA "    ;num_entero=num_entero-30000;}
if(num_entero==30000)    {letra += "TREINTA MIL "    ;num_entero=num_entero-30000;}
if(num_entero>=20000)    {letra += "VEINTE MIL "    ;num_entero=num_entero-20000;}
if(num_entero>20000)    {letra += "VEINTE "    ;num_entero=num_entero-20000;}
if(num_entero==20000)    {letra += "VEINTE MIL "    ;num_entero=num_entero-20000;}
if(num_entero>=19000)    {letra += "DIECINUEVE MIL "    ;num_entero=num_entero-19000;}
if(num_entero>=18000)    {letra += "DIECIOCHO MIL "    ;num_entero=num_entero-18000;}
if(num_entero>=17000)    {letra += "DIECISIETE MIL "    ;num_entero=num_entero-17000;}
if(num_entero>=16000)    {letra += "DIECISEIS MIL "    ;num_entero=num_entero-16000;}
if(num_entero>=15000)    {letra += "QUINCE MIL "    ;num_entero=num_entero-15000;}
if(num_entero>=14000)    {letra += "CATORCE MIL "    ;num_entero=num_entero-14000;}
if(num_entero>=13000)    {letra += "TRECE MIL "    ;num_entero=num_entero-13000;}
if(num_entero>=12000)    {letra += "DOCE MIL "    ;num_entero=num_entero-12000;}
if(num_entero>=11000)    {letra += "ONCE MIL "    ;num_entero=num_entero-11000;}
if(num_entero>=10000)    {letra += "DIEZ MIL "    ;num_entero=num_entero-10000;}
if(num_entero>=9000)    {letra += "NUEVE MIL "    ;num_entero=num_entero-9000;}
if(num_entero>=8000)    {letra += "OCHO MIL "    ;num_entero=num_entero-8000;}
if(num_entero>=7000)    {letra += "SIETE MIL "    ;num_entero=num_entero-7000;}
if(num_entero>=6000)    {letra += "SEIS MIL "    ;num_entero=num_entero-6000;}
if(num_entero>=5000)    {letra += "CINCO MIL "    ;num_entero=num_entero-5000;}
if(num_entero>=4000)    {letra += "CUATRO MIL "    ;num_entero=num_entero-4000;}
if(num_entero>=3000)    {letra += "TRES MIL "    ;num_entero=num_entero-3000;}
if(num_entero>=2000)    {letra += "DOS MIL "    ;num_entero=num_entero-2000;}
if(num_entero>=1000)    {letra += "MIL "    ;num_entero=num_entero-1000;}
if(num_entero>=900)    {letra += "NOVECIENTOS "    ;num_entero=num_entero-900;}
if(num_entero>=800)    {letra += "OCHOCIENTOS "    ;num_entero=num_entero-800;}
if(num_entero>=700)    {letra += "SETECIENTOS "    ;num_entero=num_entero-700;}
if(num_entero>=600)    {letra += "SEISCIENTOS "    ;num_entero=num_entero-600;}
if(num_entero>=500)    {letra += "QUINIENTOS "    ;num_entero=num_entero-500;}
if(num_entero>=400)    {letra += "CUATROCIENTOS "    ;num_entero=num_entero-400;}
if(num_entero>=300)    {letra += "TRECIENTOS "    ;num_entero=num_entero-300;}
if(num_entero>=200)    {letra += "DOCIENTOS "    ;num_entero=num_entero-200;}
if(num_entero>100)    {letra += "CIENTO "    ;num_entero=num_entero-100;}
if(num_entero==100)    {letra += "CIEN "    ;num_entero=num_entero-100;}
if(num_entero>90)    {letra += "NOVENTA Y "    ;num_entero=num_entero-90;}
if(num_entero==90)    {letra += "NOVENTA "    ;num_entero=num_entero-90;}
if(num_entero>80)    {letra += "OCHENTA Y "    ;num_entero=num_entero-80;}
if(num_entero==80)    {letra += "OCHENTA "    ;num_entero=num_entero-80;}
if(num_entero>70)    {letra += "SETENTA Y "    ;num_entero=num_entero-70;}
if(num_entero==70)    {letra += "SETENTA "    ;num_entero=num_entero-70;}
if(num_entero>60)    {letra += "SESENTA Y "    ;num_entero=num_entero-60;}
if(num_entero==60)    {letra += "SESENTA "    ;num_entero=num_entero-60;}
if(num_entero>50)    {letra += "CINCUENTA Y "    ;num_entero=num_entero-50;}
if(num_entero==50)    {letra += "CINCUENTA "    ;num_entero=num_entero-50;}
if(num_entero>40)    {letra += "CUARENTA Y "    ;num_entero=num_entero-40;}
if(num_entero==40)    {letra += "CUARENTA "    ;num_entero=num_entero-40;}
if(num_entero>30)    {letra += "TREINTA Y "    ;num_entero=num_entero-30;}
if(num_entero==30)    {letra += "TREINTA "    ;num_entero=num_entero-30;}
if(num_entero>20)    {letra += "VEINTI "    ;num_entero=num_entero-20;}
if(num_entero==20)    {letra += "VEINTE "    ;num_entero=num_entero-20;}
if(num_entero>=16)    {letra += "DIECISEIS "    ;num_entero=num_entero-16;}
if(num_entero==15)    {letra += "QUINCE "    ;num_entero=num_entero-15;}
if(num_entero==14)    {letra += "CATORCE "    ;num_entero=num_entero-14;}
if(num_entero==13)    {letra += "TRECE "    ;num_entero=num_entero-13;}
if(num_entero==12)    {letra += "DOCE "    ;num_entero=num_entero-12;}
if(num_entero==11)    {letra += "ONCE "    ;num_entero=num_entero-11;}
if(num_entero==10)    {letra += "DIEZ "    ;num_entero=num_entero-10;}
if(num_entero==9)    {letra += "NUEVE "    ;num_entero=num_entero-9;}
if(num_entero==8)    {letra += "OCHO "    ;num_entero=num_entero-8;}
if(num_entero==7)    {letra += "SIETE "    ;num_entero=num_entero-7;}
if(num_entero==6)    {letra += "SEIS "    ;num_entero=num_entero-6;}
if(num_entero==5)    {letra += "CINCO "    ;num_entero=num_entero-5;}
if(num_entero==4)    {letra += "CUATRO "    ;num_entero=num_entero-4;}
if(num_entero==3)    {letra += "TRES "    ;num_entero=num_entero-3;}
if(num_entero==2)    {letra += "DOS "    ;num_entero=num_entero-2;}
if(num_entero==1)    {letra += "UNO "    ;num_entero=num_entero-1;}
} 
else
{
    cout <<"\n\n\nINGRESE NUMERO >0  <1000000";
    system("cls");
}
int numero2 = (int)numero;
centavos = (numero - numero2) * 100;
cout <<"\n\n\nSON :" <<letra << "PESOS " << centavos << "/100 M.N.\n\n\n";
system("pause");

return 0;
}