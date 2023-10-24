#include<iostream>
using namespace std;
int main()
{   //0,1,1,2,3,5...
    int t1=0,t2=1,nextterm;
    int n; cin>>n;
    for (int i = 1; i <= n; i++)//i=3,nextterm=1
    {
        if (i==1)
        {
            cout<<t1<<endl;
        }else if(i==2)
        cout<<t2<<endl;

        else
       { nextterm=t1+t2;
       cout<<nextterm<<endl;
        t1=t2; t2=nextterm;}
        
    }
    /*
    CONCLUSION:
    first read the problem and solve it on paper, create complete logic before starting to write
    code, simplify the problem into simpler parts,
    */
    







}
