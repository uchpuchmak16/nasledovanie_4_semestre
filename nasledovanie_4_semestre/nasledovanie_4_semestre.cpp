#include "Header.h"
#include <cmath>
#include <iostream>

void Shape2D::CalculateArea(std::string shape) {
    float area;
    if (shape == "Triangle") {
        float base, height;
        area = 0.5 * base * height;
    }
    
    else if (shape == "Circle") {
        float radius;
        
        area = pi * pow(radius, 2);
    }
    else if (shape == "Squard") {
        float side;
        
        area = pow(side, 2);
    }
    else {
        std::cout << "Ошибка: недопустимая фигура\n";
        area = -1.0;
    }

    
}



   
void Shape3D::CalculateVolume(float height, float side, float base) {
    float volume;
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
};