#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
class Shape {
public:
    float const pi = 3.14;
    float shape;
    //virtual void scale(float scaleFactor) = 0;
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
        std::cout << "hello! I'm" << shape << std::endl;
        std::cout << "my area: " << volume << std::endl;

    }
protected:
    virtual double CalculateVolume() const = 0;
    void CalculateVolume(std::string shape);
    virtual void CalculateVolume() = 0;
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
    Square(float s) {
        side = s;
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
    float CalculateArea() override {
        return  0.5 * base * height;
    };

    void ShowInfo() override {
        std::cout << "Shape: " << GetName() << std::endl;
        std::cout << "Base: " << base << ", Height: " << height << std::endl;
        std::cout << "my area: " << CalculateArea() << std::endl;
    }
     
};

class Circle : public Shape2D {
protected:
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
 };
class TrianglePyramid : public Shape3D {
protected:
   float height;
public:
    TrianglePyramid(float h) {
        height = h;
    }
};
class Cylinder : public Shape3D {
protected:
   float height;
public:
    Cylinder(float h) {
        height = h;
    }
};
class Sphere : public Shape3D {
protected:
    
    float radius;
public:
    Sphere(float r) {
        radius =r;

    }
};
#endif HEADER_H