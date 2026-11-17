// Лабораторна робота №6 — Завдання 5 (Варіант 8, цикл while)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter a natural number N: ";
    if (!(cin >> n)) {
        n = 12345;
        cout << n << endl;
    }

    if (n <= 0) {
        cout << "Error: N must be a natural number (>= 1)." << endl;
        return 1;
    }

    if (n < 10) {
        cout << "Swapped number: " << n << endl;
        return 0;
    }

    long long last = n % 10;
    long long temp = n;
    long long power = 1;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    long long first = temp;
    long long middle = (n % power) / 10;
    long long result = last * power + middle * 10 + first;

    cout << "Original N: " << n << endl;
    cout << "Swapped number: " << result << endl;
    return 0;
}
