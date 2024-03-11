#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
class Shape {
public:
    double const pi = 3.14;
    float shape;
    virtual void scale(float scaleFactor) = 0;
    virtual void ShowInfo() const = 0; 
        
    virtual std::string GetName() const = 0;
   

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
    virtual double CalculateArea() const = 0;
    void CalculateArea(std::string shape);
    virtual void CalculateArea() = 0;
};

class Shape3D : public Shape {
public:
    float volume;
protected:
    virtual double CalculateVolume() const = 0;
    void CalculateVolume(float side, float base, float height);
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
    Triangle(float b, float h) {
        height = h;
        base = b;
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
#endif