// Lab_05_3.cpp
// Татарський Василь Петрович
// Лабораторна робота №5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 28

#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double qp, qk, q;
    int n;

    cout << "qp = "; cin >> qp;
    cout << "qk = "; cin >> qk;
    cout << "n = "; cin >> n;

    double dq = (qk - qp) / n;

    // Заголовок таблиці
    cout << "\n===========================================" << endl;
    cout << "          Таблиця значень виразу" << endl;
    cout << "===========================================" << endl;

    // Шапка таблиці
    cout << setw(12) << "q" << setw(19) << "z" << endl;
    cout << string(43, '-') << endl;

    q = qp;
    while (q <= qk)
    {
        double z = h(q + 1) + h(q * q + 1) + h(q * q) * h(q * q);
        cout << setw(15) << fixed << setprecision(6) << q
            << setw(20) << setprecision(8) << z << endl;
        q += dq;
    }

    return 0;
} 


double h(double x)
{
    if (abs(x) >= 1)
    {
        double c = cos(x);
        return (c + 1) / (c * c + 1);
    }
    else
    {
        double S = 1;
        double a = 1;

        for (int j = 1; j <= 6; j++)
        {
            a *= -x * x / ((2 * j - 1) * (2 * j));
            S += a;
        }

        return S / cos(x);
    }
}