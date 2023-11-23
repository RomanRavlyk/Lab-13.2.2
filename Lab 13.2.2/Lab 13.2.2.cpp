#include <iostream>
#include "math.h"

using namespace std;
int main() {
    // Введення довжин катетів
    double a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    // Перевірка чи є трикутник прямокутним
    double c = SQRT(POWS(a, 2) + POWS(b, 2));
    if (c > 0) {

        // Обчислення висоти H
        double h = Height(a, b ,c);

        // Виведення результату
        cout << "height: " << h << std::endl;

        // Перевірка відповідності співвідношенню
        double relation = 1.0 / POWS(h, 2);
        if (relation == 1.0 / POWS(a, 2) + 1.0 / POWS(b, 2)) {
            cout << "Correlation passed: 1/H^2 = 1/a^2 + 1/b^2\n";
        }
        else {
            cout << "Correlation not passed.\n";
        }
    }
    else {
        cout << "Triangle is not rectangular.\n";
    }

    return 0;
}