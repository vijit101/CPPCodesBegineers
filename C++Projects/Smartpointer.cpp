#include<iostream>
#include<memory>
using namespace std;

class player{
    public:
    int health = 10;

    ~player(){
        cout<<"destructor called ";
    }
};

void assignvalues(){
    unique_ptr<player> playPointer(new player());
    player play;
    *playPointer = play; 
}

int main(){
   assignvalues();
}