// Lab_05_5.cpp
// Татарський Василь Петрович
// Лабораторна робота №5.5
// Рекурсивні функції
// Варіант 28

#include <iostream>
#include <windows.h>

using namespace std;

int A(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (n == 0) {
        return A(m - 1, 1);
    }
    return A(m - 1, A(m, n - 1));
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    cout << "Функція Аккермана" << endl << endl;
    cout << "A(0, 0) = " << A(0, 0) << endl;
    cout << "A(1, 5) = " << A(1, 5) << endl;
    cout << "A(2, 5) = " << A(2, 5) << endl;
    cout << "A(3, 3) = " << A(3, 3) << endl;
    cout << "A(4, 0) = " << A(4, 0) << endl;
    return 0;
}