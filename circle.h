#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

using namespace std;

class Circle {
public:
    void setR(int r);
    
    int getR();
    void setCenter(Point center);
    
    Point getCenter();
    
private:
    int m_R;
    Point m_Center;     //在类中让另外一個類的實例變量，需要讓這個另一個類的實例變量成為public或protected
};