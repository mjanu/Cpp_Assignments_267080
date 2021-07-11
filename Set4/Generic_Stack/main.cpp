#include <iostream>
#include<cmath>
#include "stack.h"
using namespace std;

template<typename T>
MyStack<T>::MyStack():m_top(0) {}

template<typename T>
MyStack<T>::MyStack(T len):m_maxlen(50) {}

template<typename T>
MyStack<T>::MyStack(T len,T to):m_maxlen(50),m_top(0) {}

template<typename T>
void MyStack<T>::push(T val)
{
    if(m_top>=m_maxlen-1)
        cout<<"Stack Overflow"<<endl;
    else
    {
        m_top++;
        m_arr[m_top]=val;
    }

}

template<typename T>
int MyStack<T>::pop()
{

    if(m_top<=-1)
        cout<<"Stack Underflow"<<endl;
    else
    {
        cout<<"The popped element is "<< m_arr[m_top] <<endl;
        m_top--;
    }
}

template<typename T>
int MyStack<T>::peek()
{
    for(int i=0; i<m_maxlen; i++)
    {
        cout<<m_arr[i]<<",";
    }
}

template<typename T>
bool MyStack<T>::isEmpty() const
{

    if(m_top<=-1)
    {
        return true;
    }
    else
    {
        return false;

    }
}

template<typename T>
bool MyStack<T>::isFull() const
{
    if(m_top>=m_maxlen-1)
    {

        return true;
    }
    else
    {
        return false;

    }
}

int main()
{
    MyStack<int> m(10,0);
    m.peek();
    m.push(10);
    m.push(20);
    m.push(30);
    m.push(40);
    m.pop();
    m.peek();
    bool j,k;
    j=m.isFull();
    k=m.isEmpty();
    cout<<"\n";
    if(j==true)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        cout<<"No Overflow"<<"\n";
    }

    j=m.isEmpty();
    if(k==true)
    {
        cout<<"\n"<<"Stack Underflow"<<endl;
    }
    else
    {
        cout<<"No Underflow"<<"\n";
    }


}


