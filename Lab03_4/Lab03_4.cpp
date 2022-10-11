// Lab03_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Війчук Діана
//Лабораторна робота 3.4
//Розгалуження, задане плоскою фігурою
//Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // вхідні дані

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі

    if ((y <= sqrt(pow(R,2)-pow(x,2)) && y >= 0 && x<= 0) ||
        (y >= -x && y <= 2*x - 2*R && y <= 0))

        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}


