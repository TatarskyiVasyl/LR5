// Lab_05_2.cpp
// Татарський Василь Петрович
// Лабораторна робота №5.2
// Обчислення суми ряду Тейлора за допомогою функцій
// Варіант 28
// 1-й спосіб: void-функції

#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    // Перевірка умови x > 1 для цього ряду
    if (xp <= 1.0)
    {
        cout << "error: xp <= 1." << endl;
        return 1;
    }

    cout << fixed;

    cout << "---------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "atan(x)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "---------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        S(x, eps, n, s);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << atan(x) << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "---------------------------------------------" << endl;

    return 0;
}

void S(const double x, const double eps, int& n, double& s)
{
    const double PI = acos(-1.0);
    n = 0;
    double a = -1.0 / x;
    double s1 = a;

    do {
        n++;
        A(x, n, a);
        s1 += a;
    } while (abs(a) >= eps);

    s = PI / 2.0 + s1;
}

void A(const double x, const int n, double& a)
{
    // R = - (2n-1) / ((2n+1) * x^2)
    double R = -1.0 * (2.0 * n - 1.0) / ((2.0 * n + 1.0) * x * x);
    a *= R;
}