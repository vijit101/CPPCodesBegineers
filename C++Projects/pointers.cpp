#include<iostream>
using namespace std;
int main(){
    // pointer code 
    int *p = NULL,*q,**ptr;
    double *dbl;
    int x = 10;
    double m = 5;
    //cout<<*q<<"\n"<<*p<<"\n";
    p = &x;
    ptr = &p;
    dbl = &m;
    cout<<p<<"\n"<<x<<"\n"<<dbl<<"\n"<<"ptr"<<**ptr<<"\n";
    *p = 50;
    q = &x;
    cout<<*p<<"\n"<<x<<"\n";
    x = 24;
    cout<<*p<<"\n"<<x<<"\n"<<*q;
    // new vs delete 
    int *dynamicPointer = new int;
    *dynamicPointer = 10;
    delete dynamicPointer;
    cout<<dynamicPointer;
}