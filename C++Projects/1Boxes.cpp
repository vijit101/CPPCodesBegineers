#include <iostream>
#include <string>
using namespace std;
int PrintBox(char boxArray[],int arrayLength)
{
    int score = 0;
    for (int i = 0; i <= arrayLength; i++)
    {
        if (boxArray[i] == 'r')
        {
            int j;
            cout << "R" << score << endl;
            if(boxArray[i-1] !='r'){
                j=1;
                score += 10;
            }
            else if(boxArray[i-1]=='r'){
                j+=1;
                score +=j*10;
            }
        }
        else if (boxArray[i] == 'b')
        {
            int k;
            if(boxArray[i-1] !='b'){
                k=1;
                score += 20;
            }
            else if(boxArray[i-1]=='b'){
                k+=1;
                score +=k*20;
            }
        }
        else
        {
            score += 0;
        }
    }
    return score;
}
int main()
{
    int sizeArray;
    cout << "Enter the color Array Size \n";
    cin >> sizeArray;
    int totalScore = 0;
    char charArray[100];
    char array[10];
    for (int i = 0; i < sizeArray; i++)
    {
        cout << "Input the value for Char Array \n";
        cin >> charArray[i];
    }
    totalScore =  PrintBox(charArray,sizeArray);
    cout << "Total Score " << totalScore;
    return 0;
}