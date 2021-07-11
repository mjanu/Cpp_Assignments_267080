#include "account.h"
#include<iostream>

Account:: Account()
{
  m_accNumber="2525";
  m_accName="Mondeep";
  m_balance=0.00;

}
Account:: Account(std::string x,std::string y,double z) 
{
  m_accNumber=x;
  m_accName=y;
  m_balance=z;

}
Account:: Account(std::string x,std::string y)
{
   m_accNumber=x;
   m_accName=y;
   m_balance=0.00;

}
Account:: Account(const Account& ref)
{
     m_accNumber=ref.m_accNumber;
     m_accName=ref.m_accName;
     m_balance=ref.m_balance;

}
void Account::debit(double x)
{
  m_balance-=x;
  
}
void Account:: credit(double y)
{
  m_balance+=y;

}
double Account::getBalance() const{return m_balance;}
void  Account::dispay() const{std::cout<<m_accNumber<<" "<<m_accName<<" "<<m_balance<<std::endl;}














