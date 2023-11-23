#include <iostream>
#include "math.h"

using namespace std;
int main() {
    // �������� ������ ������
    double a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    // �������� �� � ��������� �����������
    double c = SQRT(POWS(a, 2) + POWS(b, 2));
    if (c > 0) {

        // ���������� ������ H
        double h = Height(a, b ,c);

        // ��������� ����������
        cout << "height: " << h << std::endl;

        // �������� ���������� ������������
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