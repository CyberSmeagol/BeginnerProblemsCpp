/*Print a Series in which the nth term if even is the sum of all previous odd terms and
 nth term if odd is the sum of previous two even terms*/




#include<iostream>
using namespace std;
int main()
{ // 1,1,1,2,3,5,7,12,17

    int number=1;
    // all three first entries are one so..... think and take number 1
    int n; cin>>n;
    int sumodd=0;
    int even=1, odd; //n=7
    for (int i = 1; i <= n; i++)
    {   sumodd=0;
        if(i<=3)
        cout<<number<<endl;
        else if (i%2==0)//even case
        {
            for (int j = 1; j <= i ; j++)
            {
                if (j%2!=0)
                {  if (i==4)
                {
                    number=even;
                    sumodd+=number;
                }else
                {number=even;
                sumodd=odd+even;}
                
                }
                
            }even=sumodd;
            cout<<even<<endl;
        }
        else if (i%2!=0)//odd case
        {
           
                    odd= even + number;
                    
            
            cout<<odd<<endl;
        }
        
        
    }
    
}
/*
CONCLUSIONS:

first understand the question and solve it on a paper ; try to break it apart into simpler parts
practise a lot



*/