//
//  Factory.h
//  singleton
//
//  Created by Student on 15-4-7.
//  Copyright (c) 2015年 qr. All rights reserved.
//

#ifndef __singleton__Factory__
#define __singleton__Factory__

#include <iostream>
using namespace std;
static const double PI =3.14;
class Shape
{
public:
    virtual double Area() =0;
    virtual ~Shape();

};
//矩形
class Rectangle:public Shape
{
public:
    Rectangle(int width,int height);
    double Area();

private:
    int _width;
    int _height;
};


Rectangle::Rectangle(int width, int height)
{
    _width=width;
    _height=height;
}
double Rectangle::Area()
{
    return  _width* _height;
}
//圆
class Circle:public Shape
{
public:
    Circle(int radius);
public:
    double Area();
private:
    int _radius;
};
Circle::Circle(int radius)
{
    _radius=radius;
}
double Circle::Area()
{
    return PI* _radius* _radius;
}

class Creator
{
public:
    virtual Shape* CreateShape() =0;
    virtual ~Creator(){}
};

class RectCreator :public Creator
{
public:
    Shape* CreateShape()
    {
        Rectangle* rect = new Rectangle(10,20);
        return rect;
    }
};

class CircleCreator: public Creator
{
public:
    Shape* CreateShape()
    {
        Circle* circle = new Circle(10);
        return  circle;
    
    }


};

void create( Creator* pCreator)
{
    Shape* pShape =pCreator->CreateShape();
    pShape->Area();
    delete pShape;
    pShape =NULL;


}
int main()
{
    CircleCreator cs;
    RectCreator rs;
    
    create(&cs);
    create(&rs);
    
    return 0;

}
#endif /* defined(__singleton__Factory__) */
