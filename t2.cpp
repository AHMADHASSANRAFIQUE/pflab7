#include<iostream>
using namespace std;
void series(int length);
main()
{
    int length;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>length;
    series(length);
    
}
void series(int length)
{
    int next=0;
    int n1=0,n2=1;
    if(length>=1)
    {
        cout<<n1;
    }
    for(int x=1;x<length;x=x+1)
    {
        cout<<", "<<n2;
        next=n1+n2;
        n1=n2;
        n2=next;
    }
   
}