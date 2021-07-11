#ifndef __GPOINT_H
#define __GPOINT_H
#include<math.h>
#include<iostream>

enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};

template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  int distanceFromOrigin();
  Quadrant quadrant();
  void display();
};

template<typename T>
Point<T>::Point():m_x(0),m_y(0) {}
template<typename T>
Point<T>::Point(T x,T y):m_x(x),m_y(y) {}

template<typename T>
int Point<T>::distanceFromOrigin()
{
    T d;
    d=sqrt((m_x*m_x)+(m_y*m_y));
    //std::cout<<"Distance from Origin:"<<d<<"\n";
    return d;
}
template<typename T>
Quadrant Point<T>::quadrant()
{

    if((m_x>0)&&(m_y>0))
    {
        std::cout<<"Quadrant:"<<"Q1";
    }
    else if((m_x<0)&&(m_y>0))
    {
        std::cout<<"Quadrant:"<<"Q2";
    }
    else if((m_x<0)&&(m_y<0))
    {
        std::cout<<"Quadrant:"<<"Q3";
    }
    else
    {
        std::cout<<"Quadrant:"<<"Q4";
    }


}
template<typename T>
void Point<T>::display()
{
    std::cout<<"X axis:"<<m_x<<"\n"<<"Y axis:"<<m_y<<"\n";
}


#endif
