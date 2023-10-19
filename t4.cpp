#include<iostream>
using namespace std;
int digits(int num,int check);
main()
{
    int num,check;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the digit to check: ";
    cin>>check;
    int result=digits(num,check);
    cout<<"Frequency: "<<result;
}
int  digits(int num,int check)
{
    int mod=1;
    int frequency=0;
    while(num>0)
    {
        mod=num%10;
        num=num/10;
        if(mod==check)
        {
            frequency=frequency+1;
        }
        
    }
    return frequency;
}