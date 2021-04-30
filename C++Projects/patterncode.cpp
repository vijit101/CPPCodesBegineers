#include<iostream>
using namespace std;

/* 
question
5
12345
1234
123
12
1*/

void PatternAnswer1(){
    int num;
    cin>>num;
    int count = num;
    num++;
    for (int i = 0; i <= count; i++)
    {
        num = num -1;
        for (int j = 0; j < num; j++)
        {
            cout<<j+1;
        }
        cout<<"\n";
    }
    
}

void PatternAnswer2(){
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-i; j++)
        {
            cout<<j+1;
        }
        cout<<"\n";
    }
    
}

/*new question 3 
5
1
01
101
0101
10101
*/

void Pattern3(){
    // got the wrong pattern answer
    int count;
    cin>>count;
    int prevChar = 0;
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (prevChar == 0)
            {
                cout<<"1";
                prevChar = 1;
            }else
            {
                cout<<"0";
                prevChar = 0;
            }
            
            
        }
        cout<<"\n";
        
    }
    
}
/*
5
1
01
101
0101
10101
*/

void Pattern4(){
    int count;
    cin>>count;
    for (int i = 1; i <=count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout<<"1";
                
            }
            else
            {
                cout<<"0";
                
            }
            
            
        }
        cout<<"\n";
        
    }
    
}
/*
pattern question 

5
     *****
    *****
   *****
  *****
 *****

*/
void Pattern5(){
    int count;
    cin>>count;
    for (int i = 1; i <=count; i++)
    {
        for (int j = i; j <= count; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= count; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
}
/*
4
*    ****
**    ***
***    **
****    *
*/

void Pattern6(){
    int count;
    cin>>count;
    for (int i = 1; i <=2*count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i>count)
            {
                break;
            }
            else
            {
                cout<<"*";
            }
        }
        for (int k = 1; k <= count; k++)
        {
            cout<<" ";
        }
        for (int j = i; j <= count; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

void Pattern7(){
    int count;
    cin>>count;
    for (int i = 1; i <=2*count; i++)
    {
        if (i<count+1)
        {
            for (int j = 1; j <= count+1; j++)
            {

                if (j<=i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                
            }

            for (int k=1; k <= count+1; k++)
            {
                if (k>((count+1)-i))
                {
                  
                    cout<<"*";
                }
                else
                {
                  
                    cout<<" ";
                }
                
            }
            
        }
        else
        {
            for (int k=count; k <= 1; k--)
            {
                cout<<"*";
            }
            for (int j = 1; j <= count+1; j++)
            {
                
            }
        }
        cout<<"\n";
    }
}
int main(){
    //PatternAnswer1();
    //PatternAnswer2();
    Pattern7();
    return 0;
}