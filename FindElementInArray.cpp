// size of gives the size in bytes
/*char: 1 byte
int: 4 bytes
float: 4 bytes
double: 8 bytes
long: 4 or 8 bytes (depending on the system)
long long: 8 bytes


*/

#include<iostream>

using namespace std;
int linearsearch(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){

 int arr[]={1,2,3,4,5};
 int n =sizeof(arr)/sizeof(0);
 int target ;cin>>target;
int index = linearsearch(arr, n, target);

if (index==-1)
{
    cout<<"no";
}else
cout<<target <<" at "<<index;


}