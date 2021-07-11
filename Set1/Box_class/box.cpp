#include "box.h"
#include<iostream>


Box::Box()
{
   m_length=1;
   m_breadth=1;
   m_height=1;
}

Box::Box(int x,int y,int z)
{
  m_length=x;
  m_breadth=y;
  m_height=z;
}

Box::Box(int s)
{
  m_length=s;
  m_breadth=s;
  m_height=s;
}
Box::Box(const Box& ref)
{
   m_length=ref.m_length;
   m_breadth=ref.m_breadth;
   m_height=ref.m_height;

}

 int Box:: length()const{return m_length;}
 int Box:: breadth()const {return m_breadth;}
 int Box:: height()const{return m_height;}
 int Box:: volume()const{return(m_length*m_breadth*m_height);}
 void Box:: display()const{std::cout<<m_length<<" "<<m_breadth<<" "<<m_height<<std::endl;}  
