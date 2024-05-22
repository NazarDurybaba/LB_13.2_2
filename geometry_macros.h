// geometry_macros.h
#ifndef GEOMETRY_MACROS_H
#define GEOMETRY_MACROS_H

#include <cmath>  // для sqrt

// Макрос для перевірки існування трикутника за сторонами a, b, c
#define IS_TRIANGLE_EXIST(a, b, c) (((a) + (b) > (c)) && ((a) + (c) > (b)) && ((b) + (c) > (a)))

// Макрос для обчислення площі трикутника за формулою Герона
#define TRIANGLE_AREA(a, b, c) (sqrt(((a) + (b) + (c)) / 2 * (((a) + (b) + (c)) / 2 - (a)) * (((a) + (b) + (c)) / 2 - (b)) * (((a) + (b) + (c)) / 2 - (c))))

// Макрос для обчислення площі трапеції
#define TRAPEZOID_AREA(a, b, h) (((a) + (b)) * (h) / 2)

#endif // GEOMETRY_MACROS_H
