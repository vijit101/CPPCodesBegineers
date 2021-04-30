#include<iostream>
using namespace std;

template<typename T>
void genericAdd(T m, T x){
    T b;
    b = m+x;
    cout<<b<<"\n";
}

template<typename V>
class genericClass{
    public :
    V obj1;
};
int main(){
    genericAdd(10,20);
    genericAdd(10.5,9.5);
    genericAdd('a','1');
    genericClass<int> gc;
    gc.obj1 = 10;
    cout<<gc.obj1<<"\n"; 
    genericClass<char> gc2;
    gc2.obj1 = 'a';
    cout<<gc2.obj1<<"\n";
}