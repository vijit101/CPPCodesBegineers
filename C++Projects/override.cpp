#include<iostream>
using namespace std;

class ParentClass
{
    public : 
    void displayFunc()
    {
        cout<<"hello Parent class";
    }
    virtual void Test(){
        cout<<"test parent";
    }
    // virtual void Test(); will give a syntax error as i have made a class object for this abstract class
};

class childClass : public ParentClass
{
    public :
    void displayFunc()
    {
        cout<<"hello child class";
    }
    virtual void Test(){
        cout<<"virtual fx worked";
    }
};


int main()
{
    ParentClass *parentc = new ParentClass();
    parentc->displayFunc();
    ParentClass *parentpoint;
    cout<<"\n";
    childClass child;
    *parentpoint = child;
    child.displayFunc();
    cout<<"\n break";
    childClass *point;
    ParentClass pc;
    //*point = pc; would not allow as child if points to parent but parent have no child fx 
    point->displayFunc();
    point->Test();
    return 0;
}