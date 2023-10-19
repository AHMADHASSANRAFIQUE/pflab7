#include<iostream>
using namespace std;
int lcm(int num1,int num2,int result);
int gcd(int num1,int num2);
main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int result=gcd(num1,num2);
    int result1=lcm(num1,num2,result);
    cout<<"GCD: "<<result<<endl;
    cout<<"LCM: "<<result1<<endl;
}
int lcm(int num1,int num2,int result)
{
    int lcM=num1*num2/result;
    return lcM;
}
int gcd(int num1,int num2)
{
    while(num1 != num2)
    {
        if(num1 > num2)
        {
        num1 -= num2;
        }
        else
        {
        num2 -= num1; 
        }
    }
    return num1;   
}