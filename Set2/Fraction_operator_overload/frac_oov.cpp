#include "frac_oov.h"
#include<iostream>

Fraction:: Fraction()
{
  m_numerator=0;
  m_denominator=1;
}

Fraction:: Fraction(int x,int y)
{
  m_numerator=x;
  m_denominator=y; 
}
Fraction:: Fraction(int x)
{
  m_numerator=0;
  m_denominator=x;
}
Fraction Fraction::operator+(const Fraction& ref1)
{
   int nm=m_numerator+ref1.m_numerator;
   int dm=m_denominator+ref1.m_denominator;
   
   return Fraction(nm,dm);

}
Fraction Fraction:: operator-(const Fraction& ref2)
{
   int nm=m_numerator-ref2.m_numerator;
   int dm=m_denominator-ref2.m_denominator;
   
   return Fraction(nm,dm);
}
Fraction Fraction:: operator*(const Fraction& ref3)
{
    int nm=m_numerator*ref3.m_numerator;
    int dm=m_denominator*ref3.m_denominator;
   
   return Fraction(nm,dm);
   
}
Fraction Fraction:: operator+(int x)
{
  int nm=this->m_numerator;
  int dm=m_denominator+x;
  
  return Fraction(nm,dm);


}

Fraction Fraction:: operator-(int y)
{
   int nm=this->m_numerator;
   int dm=m_denominator-y;
  
  return Fraction(nm,dm);

}

 bool Fraction ::operator==(const Fraction& ref4)
 {
    if(m_numerator==ref4.m_numerator && m_denominator==ref4.m_denominator)
       return true;
    else
       return false;   
 
 }
 bool Fraction ::operator<(const Fraction& ref5)
 {
    if(m_numerator<ref5.m_numerator && m_denominator<ref5.m_denominator)
      return true;
    else
      return false; 
 }
 
bool Fraction:: operator>(const Fraction& ref6)
{
  

    if(m_numerator>ref6.m_numerator && m_denominator>ref6.m_denominator)
      return true;
    else
      return false; 

}

 Fraction Fraction::simplify()
 {
   double val=(m_numerator/m_denominator);
   return *this;
 
 }
bool Fraction::isSimplest() 
const{
   if(m_numerator%m_denominator==0)
      return true;
   else

      return false;
      } 
        
void Fraction::display() const{std::cout<<m_numerator<<" "<<m_denominator<<std::endl;}

/*std::ostream& Fraction::operator<<(ostream& rout,const MyTime& ref7)
{
    rout << ref7.m_numerator << " " << ref7.m_denominator << "\n";
    return rout;
}*/



















































