#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
#include <cmath>

class Shape {
public:
    float const pi = 3.14;
    float shape;
    virtual void ShowInfo() = 0; 
    virtual std::string GetName() = 0;
    virtual ~Shape() {}
};

class Shape2D : public Shape {
public:
    float GetArea() {
        return area;
    }
    bool operator>(Shape2D& other) {
        return this->area > other.area;
    }
    bool operator<(Shape2D& other) {
        return this->area < other.area;
    }
    bool operator==(Shape2D& other) {
        return this->area == other.area;
    }

protected:
    float area;
    virtual double CalculateArea() = 0;
 };

class Shape3D : public Shape {
public:
    float volume;
    void ShowInfo() {
}
protected:
    
    virtual double CalculateVolume() = 0;
    float GetArea() {
        return volume;
    }

    bool operator>(Shape3D& other) {
        return this->volume > other.volume;
    }

    bool operator<(Shape3D& other) {
        return this->volume < other.volume;
    }

    bool operator==(Shape3D& other) {
        return this->volume == other.volume;
    }
};
class Square : public Shape2D {
protected:
    float side;
public:
    Square(float s) : side(s) {}
    std::string GetName() {
        return "Square";
    }
    double CalculateArea()  override {
        return  side * side;
    };
    void ShowInfo() override {
        std::cout << "hi! i'm: " << GetName() << std::endl;
        std::cout << "my base: " << side << std::endl;
        std::cout << "my area: " << CalculateArea() << std::endl;
    }
};
class Triangle : public Shape2D {
protected:
    float base;
    float height;
public:
    Triangle(float b, float h) : base(b), height(h) {}

    std::string GetName() {
        return "Triangle";
    }
    double CalculateArea()  override {
        return  0.5 * base * height;
    };

    void ShowInfo() override {
        std::cout << "hi! i'm: " << GetName() << std::endl;
        std::cout << "my base: " << base << ", my height: " << height << std::endl;
        std::cout << "my area: " << CalculateArea() << std::endl;
    }
     
};
class Circle : public Shape2D {
protected:
    float radius;
public:
    Circle(float r): radius(r) {}

    std::string GetName() {
        return "Circle";
    }
    double CalculateArea()  override {
        return  pi * radius * radius;
    };
    void ShowInfo() override {
        std::cout << "hi! i'm: " << GetName() << std::endl;
        std::cout << "my radius: " << radius << std::endl;
        std::cout << "my area: " << CalculateArea() << std::endl;
    }
 };
class TrianglePyramid : public Shape3D {
protected:
   float height;
   float base;
public:
    TrianglePyramid(float h, float b): height(h), base(b) {}

    std::string GetName() {
        return "TrianglePyramid";
    }
    double CalculateVolume()  override {
        return  (height * base)/(4* std::sqrt(3)) ;
    };
    void ShowInfo() override {
        std::cout << "hi! i'm: " << GetName() << std::endl;
        std::cout << "my base: " << base << " my height: " << height << std::endl;
        std::cout << "my volume: " << CalculateVolume() << std::endl;
    }
};
class Cylinder : public Shape3D {
protected:
   float height;
   float radius;
public:
    Cylinder(float h, float r): height(h), radius(r) {}

    std::string GetName() {
        return "Cylinder";
    }
    double CalculateVolume()  override {
        return  pi * radius * radius * height;
    };
    void ShowInfo() override {
        std::cout << "hi! i'm: " << GetName() << std::endl;
        std::cout << "my radius: " << radius << " my height: " << height << std::endl;
        std::cout << "my volume: " << CalculateVolume() << std::endl;
    }

};
class Sphere : public Shape3D {
protected:
    
    float radius;
public:
    Sphere(float r): radius(r) {}

    std::string GetName() {
        return "Sphere";
    }
    double CalculateVolume()  override {
        return 4 * pi * radius * radius ;
    };
    void ShowInfo() override {
        std::cout << "hi! i'm: " << GetName() << std::endl;
        std::cout << "my radius: " << radius  << std::endl;
        std::cout << "my volume: " << CalculateVolume() << std::endl;
    }

};
#endif HEADER_H