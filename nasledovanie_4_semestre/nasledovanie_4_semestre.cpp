#include "Header.h"
#include <cmath>
#include <iostream>
#include <string>
//void Shape2D::CalculateArea() {

void Shape3D::CalculateVolume() {
}
void GetName() {

}
//void Shape2D::CalculateArea(std::string shape) {
//    float area;
//    if (shape == "Triangle") {
//        float base = 0.0;
//        float height = 0.0;
//        area = 0.5 * base * height;
//    }
//    
//    else if (shape == "Circle") {
//        float radius = 0.0;
//        area = pi * pow(radius, 2);
//    }
//    else if (shape == "Squard") {
//        float side = 0.0;
//        
//        area = pow(side, 2);
//    }
//    else {
//        std::cout << "Ошибка: недопустимая фигура\n";
//        area = -1.0;
//    }

    
}



   
void Shape3D::CalculateVolume(std::string shape) {
    float volume;
    if (shape == "TrianglePyramid") {
        float base = 0.0;
        float height = 0.0;
        
    }
    else if (shape == "Cylinder") {
        float height = 0.0;
        float radius = 0.0;
        
        volume = pi * pow(radius, 2) * height;
    }
    else if (shape == "Sphere") {
        float radius = 0.0; 
        volume = (4 * pi * pow(radius, 3)) / 3;
    }
    else {
        std::cout << "Ошибка: недопустимая фигура\n";
        volume = -1.0;
    }
};

