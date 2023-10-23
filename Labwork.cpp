#include <iostream>
#include<cmath>
using namespace std;

int main() 
{   int n,m,x,y,z;
float a,b,c;
    int choice = 0;
    int Qn;
    do
    {
        cout<<"Please Enter QN: 1,2,3, 4, 5, 6, 7\t";
        cin>>Qn;
    switch(Qn)
    {
        case 1:
      {  int l=25;
     
    for ( int i = 1; i <= 50 ; i++)
    {
        n=i;
        if (n%2!=0)
        {
            cout<<"Square root of "<< n<<" = "<<sqrt(n)<<endl;
        }
        break;
    }}
        case 2:
     {  
         n=1,m=0;
       cout<<"Enter number for calculation of factorial= "<<endl;
       cin>>n;
        while (n!=0)
        {
             
            
            m=n;
            for (int i = 1; i < n; i++)
            {   
                m*=(n-i);
            }cout<<"Factorial =  "<<m<<endl;
            cout<<"Enter number for calculation of factorial or input 0 to terminate the program "<<endl;
            cin>>n;
            if (n==0)
            {
                break;
            }         






        break;
        }
        case 3:
       {



do
{ cout<<"Enter two numbers= "<<endl;
cin>>n>>m;
cout<<n<<" Raised to the power " <<m<<" = "<<pow(n,m)<<endl;
break;
    
} while (n>0 || m>0);





        break;
       }
        case 4:
        {
cout<<"Enter The table number"<<endl;
cin>>n;
cout<<"Enter Length of table"<<endl;
cin>>m;
for (int i = 1; i <= m; i++)
{
    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        break;
}
        case 5:
    
{
    a=0.0,b=0.0,c=0;
    cout<<"Enter the number of Total floors of the Hotel = "<<endl;
    cin>>x;//5
    for (int i = 1; i <= x; i++)
    {
        
            if (i==13)
            {
                i++;
                c--;
            }
            cout<<" Floor number "<<i<<endl;
            cout<<"Enter number of Rooms on this Floor"<<endl;
            cin>>y;
            cout<<"Enter number of occupied Rooms"<<endl;
            cin>>z;
            if(z>y)
            {
                cout<<"Inavlid entry";
                cin>>z;
            }
            
            a+=y;
            b+=z;
            c++;
    }cout<<"There are total "<<a<<" Rooms on "<<c<<" Floors"<<endl<<" The Total number of occupied Rooms are "<<b<<" The vacant rooms are "<<a-b<<" The percentage occupied rooms are "<<(b/a)*100<<" %"<<endl;
     break;
}



       
        
        case 6:
       {int k;
cout<<" Enter Starting Point"<<endl;
cin>>n;
cout<<" Enter ending Point"<<endl;
cin>>m;
k=n;
do
{
    for (int i = 1; i <= k; i++)
    {
        cout<<k;
    }cout<<endl;
    k--;
    
} while (k>=m);
        break;
        
               }       
                case 7:
     {   int n;
cout<<"Enter a positive number = "<<endl;
cin>>n;
int j=0;
for (int i = 1; i <= n; i++)
{
    cout<<i<<" ^ 2";
    j+=i*i;
    if (i<n)
    {
        cout<<" + ";
    }
    
}
cout<<" = "<<j;
        break;
     }  
     case 8:
     {    
    cout<<"Enter length of box= "<<endl;
    cin>>n;

for (int i = 1; i <= n/2; i++)
{
    for (int j = 1; j < n/2; j++)
    {
        cout<<"= ";

    }
    cout<<"==  ";
  
}cout<<endl;
for (int i = 0; i <= n; i++)
{
    cout<<"=";
    for (int j = 1; j <=n*(n/2)+(n/2) ; j++)
    {
        cout<<" ";

    }
cout<<"=";
    cout<<endl;
    
}
for (int i = 1; i <= n/2; i++)
{
    for (int j = 1; j < n/2; j++)
    {
        cout<<"= ";

    }
    cout<<"==  ";
  
}cout<<endl;
        break;
     }
     case 9:
     {      m=0;
    int arr[5];
    cout<<"Enter 5 Integers= "<<endl;
    for (int i = 0; i < 5; i++)
    {    cin>>n;
        arr[i]=n;
        m+=n;
    }cout<<"Sum= "<<m;
        break;
     }
     case 10:
     { int arr[500];
    
    cout<<"enter size  = ";
    cin>>y;
    cout<<"enter The numbers = ";
    for (int i = 1; i <= y; i++)
    {
        cin>>arr[i];
        if (i<y)
        {
            
        }
        
    }
    for (int i = 1; i <= y/2; i++)
    {
        x=arr[i];
        arr[i]=arr[y-i+1];
        arr[y-i+1]=x;

    }
    cout<<"the reverse  is = ";
    for (int i = 1; i <= y; i++)
    {
        cout<<arr[i];
    }
        break;
     }
        default:
          cout<<"Wrong Input \n";
     
    } }
    cout<<"\nPress 1 if you want to ReRun this programe\n Press any other key to exit";
    cin>>choice;
    }}
    while(choice==1);
    
    system("pause");
    
    }
