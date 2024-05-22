// main.cpp
#include <iostream>
#include <Windows.h>
#include "geometry_macros.h"

int main() {

    SetConsoleOutputCP(1251);

    double a, b, c, d, h, area;

    // Введення значень для трикутника
    std::cout << "Введіть три сторони трикутника (a, b, c): ";
    std::cin >> a >> b >> c;

    if (IS_TRIANGLE_EXIST(a, b, c)) {
        area = TRIANGLE_AREA(a, b, c);
        std::cout << "Площа трикутника: " << area << std::endl;
    }
    else {
        // Введення значень для трапеції
        std::cout << "Трикутник не існує. Введіть основи та висоту трапеції (a, b, h): ";
        std::cin >> a >> b >> h;

        if (a > 0 && b > 0 && h > 0) {
            area = TRAPEZOID_AREA(a, b, h);
            std::cout << "Площа трапеції: " << area << std::endl;
        }
        else {
            std::cerr << "Невірні параметри для трапеції!" << std::endl;
        }
    }

    return 0;
}
