// Lab_03_2.cpp
// Нюл Василь
// Лабораторна робота No 4.4
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 7

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double xp, xk, dx, x, R, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout<<"x=";cin >>x;
    cout<<"R=";cin >>R;
    
    cout << fixed;
    cout << "     Таблиця перевірки     " << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
         << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if(x<=-R)
           y=R;
        else
            if(-R<x && x<=R)
               y=sqrt(R*R-x*x)+R;
            else
                if(R<x && x<=6)
                   y=R+(-3-R)/(6-R)*(x-R);
                else
                    y= x-9;
        
        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    
    return 0;
}
