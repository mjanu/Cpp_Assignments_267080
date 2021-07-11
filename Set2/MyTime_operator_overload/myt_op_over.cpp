#include "myt_op_over.h"
#include<iostream>

MyTime:: MyTime()
{
   m_hours=0;
   m_minutes=0;
   m_seconds=0;

}
MyTime:: MyTime(int x,int y,int z)
{
    m_hours=x;
    m_minutes=y;
    m_seconds=z;

}
MyTime:: MyTime(int x,int y)
{
    m_hours=x;
    m_minutes=y;
    m_seconds=0;

}
MyTime MyTime:: operator+(const MyTime& r1)
{
  int t_hours,t_minutes,t_seconds;
  t_hours=m_hours+r1.m_hours;
  t_minutes=m_minutes+r1.m_minutes;
  t_seconds=m_seconds+r1.m_seconds;
  
  return MyTime(t_hours,t_minutes,t_seconds); 

}
MyTime MyTime:: operator-(const MyTime& r2)
{
   int t_hours,t_minutes,t_seconds;
   t_hours=m_hours-r2.m_hours;
   t_minutes=m_minutes-r2.m_minutes;
   t_seconds=m_seconds-r2.m_seconds;
  
  return MyTime(t_hours,t_minutes,t_seconds); 

}
MyTime MyTime:: operator+(int x)
{
   int th=this->m_hours;
   int tm=this->m_minutes;
   int ts=m_seconds+x;
   
   return MyTime(th,tm,ts);

}
MyTime MyTime::operator-(int y)
{
   int th=m_hours;
   int tm=m_minutes;
   int ts=m_seconds-y;
   
   return MyTime(th,tm,ts);

}
MyTime& MyTime::operator++()
{
  ++m_seconds;
  return *this;

}
MyTime MyTime:: operator++(int dummy)
{
   MyTime orig{*this};
   ++m_seconds;
   return orig;

}

MyTime& MyTime::operator+=(const MyTime& ref2)
{
   m_hours+=ref2.m_hours;
   m_minutes+=ref2.m_minutes;
   m_seconds=ref2.m_seconds;
   
   return *this;
}
bool MyTime::operator==(const MyTime& ref3)
{
   if(m_hours==ref3.m_hours && m_minutes==ref3.m_minutes && m_seconds==ref3.m_seconds)
      return true;
   else
      return false;
}

bool MyTime :: operator<(const MyTime& ref4)
{
  if(m_hours<ref4.m_hours)
    return true;
  else
    return false;  

}
bool MyTime::operator>(const MyTime& ref5)
{
  if(m_hours>ref5.m_hours)
    return true;
  else
    return false;  
}
void MyTime::display() const{std::cout<<m_hours<<" "<<m_minutes<<" "<<m_seconds<<std::endl;}

/*std::ostream &operator<<(const std::ostream &rout, const MyTime &ref6)// std class;
{
   rout << ref6.m_hours << ":" << ref6.m_minutes << ":"<<ref6.m_seconds<<std::endl;
   return rout;

}*/
















