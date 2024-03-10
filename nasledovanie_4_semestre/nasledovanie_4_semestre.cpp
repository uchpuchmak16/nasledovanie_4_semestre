#include "Header.h"
#include <cmath>
#include <iostream>

void Shape2D::CalculateArea(std::string shape) {
    float area;
    if (shape == "Triangle") {
        float base, height;
        std::cout << "Введите длину основания треугольника: ";
        std::cin >> base;
        std::cout << "Введите высоту треугольника: ";
        std::cin >> height;
        area = 0.5 * base * height;
    }
    else if (shape == "Circle") {
        float radius;
        std::cout << "Введите радиус круга: ";
        std::cin >> radius;
        area = pi * pow(radius, 2);
    }
    else if (shape == "Squard") {
        float side;
        std::cout << "Введите длину стороны квадрата: ";
        std::cin >> side;
        area = pow(side, 2);
    }
    else {
        std::cout << "Ошибка: недопустимая фигура\n";
        area = -1.0;
    }

    //return area;
}



    //float CalculateArea(float side, float base, float height, ShapeType type); {
    //    switch (ShapeType) {
    //    case ShapeType::SQUARE:
    //        return side * side;
    //        break;
    //    case CIRCLE:
    //        return 3.14 * radius * radius;
    //        break;
    //    case TRIANGLE:
    //        return 0.5 * base * height;
    //        break;
    //    default:
    //        return 0.0f;
    //    }
    //};

void Shape3D::CalculateVolume(float height, float side, float base) {
    /*enum ShapeType {
            TRIANGAL_PYRAMID,
            SPHERE,
            CYLINDER
    };*/

     /*float CalculateVolume(float side, float base, float height, ShapeType type) {
            switch (type) {
            case TRIANGAL_PYRAMID :
                return ( height * 0.5 * base * height)/3;
                break;
            case SPHERE:
                return (3.14 * radius * radius * radius * 4)/3;
                break;
            case CYLINDER:
                return 3.14 * height * radius * radius;
                break;
            default:
                return 0.0f;
            }
     }*/
 }