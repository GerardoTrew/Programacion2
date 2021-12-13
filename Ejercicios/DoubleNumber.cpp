#include <iostream>

int doubleNumber(int num)
{
   return num * 2;
    }

int main()
{
    std::cout << "Ingrese un número entero";
    int x {};
    std :: cin >> x;
    std::cout << "El doble de " << x << " es: " << doubleNumber(x) << "\n";

    }
