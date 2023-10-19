#include<iostream>
using namespace std;
int digits(int num);
main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result=digits(num);
    cout<<"Total number of digits: "<<result;
}
int  digits(int num)
{
    int digit=0;
    while(num>0)
    {
        digit=digit+1;
        num=num/10;
        
    }
    return digit;
}