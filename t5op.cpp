#include<iostream>
using namespace std;
int digits(int num);
main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result=digits(num);
    cout<<"Sum of digits: "<<result;
}
int  digits(int num)
{
    int mod=1;
    int sum=0;
    while(num>0)
    {
        mod=num%10;
        num=num/10;
        sum=sum+mod;
    }
    return sum;
    
}