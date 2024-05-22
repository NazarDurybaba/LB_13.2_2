// main.cpp
#include <iostream>
#include <Windows.h>
#include "geometry_macros.h"

int main() {

    SetConsoleOutputCP(1251);

    double a, b, c, d, h, area;

    // �������� ������� ��� ����������
    std::cout << "������ ��� ������� ���������� (a, b, c): ";
    std::cin >> a >> b >> c;

    if (IS_TRIANGLE_EXIST(a, b, c)) {
        area = TRIANGLE_AREA(a, b, c);
        std::cout << "����� ����������: " << area << std::endl;
    }
    else {
        // �������� ������� ��� ��������
        std::cout << "��������� �� ����. ������ ������ �� ������ �������� (a, b, h): ";
        std::cin >> a >> b >> h;

        if (a > 0 && b > 0 && h > 0) {
            area = TRAPEZOID_AREA(a, b, h);
            std::cout << "����� ��������: " << area << std::endl;
        }
        else {
            std::cerr << "����� ��������� ��� ��������!" << std::endl;
        }
    }

    return 0;
}
