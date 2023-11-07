#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;
const int s=25;

int largestno( int arr[])
 {
    int l=0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i]>l)
        {
            l=arr[i];
        }
        
    }
    
    return l;

 }

 void _3largest(int arr[])
 {
    int l=0,sl=0,tl=0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i]>l)
        {   tl=sl;
            sl=l;
            l=arr[i];
        }
       else if (arr[i]>sl )
        {   
           if (l>sl)
           {tl=sl;
            sl=arr[i];
           }
           
        }else
        tl=arr[i];
            
    }
    cout<<" "<<l<<" "<<sl<<" "<<tl;

 }
 void k_largest(int arr[],int k)
 {  
        for (int i = 0; i <s; i++)
        {
            for (int  j = 0; j < i; j++)
            {
                if (arr[i]<arr[j])
                {
                    swap(arr[i],arr[j]);
                }
                
            }
            
            
        }
        for (int i = s-1; i >=0; i--)
        {
            if (k>0)
            {
                cout<<arr[i]<<" ";
            }k-=1;
            
        }
        


 }
 
int main()
{
    int q;
cout<<" Enter Question number: ";
cin>>q;

   srand(time(0));
       int arr[s];

        for (int i = 0; i < s; i++)
        {
            arr[i]=(rand()%29)+1;
            cout<<arr[i]<<" ";
        }
    cout<<endl;
switch (q)
{
case 1://find largest number

   { int a=largestno(arr);
        cout<<"largest no = "<<a<<endl;   
   }break;
    case 2://three largest numbers in the array
 {       
        _3largest(arr);
        
  } break;
  case 3://give k number of largest numbers of an array
  {
    int k;cin>>k;
   
    k_largest(arr,k);

  }
  break;
  case 4:
  {
    
  }
  break;
default:
    break;
}

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       