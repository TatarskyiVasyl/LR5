// Lab_05_1.cpp
// Татарський Василь Петрович
// Лабораторна робота №5.1
// Функції, що містять арифметичний вираз
// Варіант 28

#include <iostream>
#include <cmath>

using namespace std;

double f(double a);

int main()
{
    double x;

    cout << "x = ";
    cin >> x;

    // Обчислюємо вираз
    double c = (f(x) + f(1 + f(x))) / (1 + f(1 + f(x) * f(x)) * f(1 + f(x) * f(x)));

    cout << "c = " << c << endl;

    return 0;
}

double f(double a)
{
    return sin(a) * sin(a) + a * a + 1;
}