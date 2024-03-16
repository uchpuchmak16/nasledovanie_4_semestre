#include "Header.h"
#include <iostream>
#include "nasledovanie_4_semestre.cpp"

int main() {
  
    Triangle tr(2,5); 
    tr.ShowInfo(); 
    
    Square sq(4);
    sq.ShowInfo();

    Circle cr(4);
    cr.ShowInfo();

    TrianglePyramid tp(4,5);
    tp.ShowInfo();

    Sphere sp(2);
    sp.ShowInfo();
    return 0;
    
   

};