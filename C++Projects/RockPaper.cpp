#include<iostream>
using namespace std;

void CheckWinCondition(char user1Input,char user2Input,int choice){
    if(((user1Input == 'R')||(user1Input == 'P')||(user1Input =='S'))&&((user2Input == 'R')||(user2Input == 'P')||(user2Input =='S'))){
            if (user1Input == user2Input)
            {
                cout<<"Draw";
            }
            else if((user1Input == 'R'&&user2Input=='P')||(user1Input == 'P' && user2Input=='S')||(user1Input == 'S'&&user2Input=='R')){
                if(choice == 1){
                    cout<<"Computer Choose "<<user2Input <<" and Won \n";
                }
                else
                {
                    cout<<"Player 2 Choose "<<user2Input <<" and Won \n";
                    cout<<"Player 2 wins \n";
                }               
            }
            else
            {
                cout<<"Player 1 Choose "<<user1Input <<" and Won \n";
                cout<<"Player 1 wins \n";
                }        
        }
        else
        {
            cout<<"Wrong Input";
        }
}
int main(){
    char user1Input,user2Input;
    int comp;
    cout<<"Input as 1 to play against comp and 2 to play against player for any other input Exit \n";
    cin>>comp;
    if (comp == 1)
    {
        cout<<"Computer Chosen \n";
        int compChoice = rand()%3 + 1;//comp choice - 1 - 3 
        cout<<"Enter User 1 input R/P/S \n";
        cin>>user1Input;
        if(compChoice == 1){
            user2Input = 'R';
        }
        else if(compChoice == 2){
            user2Input = 'S';
        }
        else
        {
            user2Input = 'P';
        }       
        CheckWinCondition(user1Input,user2Input,comp);
    } 
    else if(comp == 2){
        cout<<"Enter User 1 input R/P/S \n";
        cin>>user1Input;
        cout<<"Enter User 2 input R/P/S \n";
        cin>>user2Input;
        CheckWinCondition(user1Input,user2Input,comp); 
    }
    else{
        cout<<"Wrong Input";
    }

    return 0;
}