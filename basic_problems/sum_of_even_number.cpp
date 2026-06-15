// Find sum of all even number from 2 to n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
            
        }
        i++;
        
    }
    cout<<"Sum is : "<<sum<<endl;
}