#include<iostream>
#include<iomanip>
using namespace std;
void checkcount(int count);
main()
{
    int count;
    cout<<"Enter numbers count: ";
    cin>>count;
    checkcount(count);
}
void checkcount(int count)
{
    int num=0;
    float nnum=count*1.0;

    float num1=0.0;
    float num2=0.0;
    float num3=0.0;
    float num4=0.0;
    float num5=0.0;
    for(count;count >= 1;count = count - 1)
    {
        cout<<"Enter a number: ";
        cin>>num;
        if(num<200)
        {
            num1=num1+1.0;
        }
        else if(num>=200 && num<400)
        {
            num2=num2+1.0;
        }
        else if(num>=400 && num<600)
        {
            num3=num3+1.0;
        }
        else if(num>=600 && num<800)
        {
            num4=num4+1.0;
        }
        else if(num>=800)
        {
            num5=num5+1.0;
        }
    }
    float per1 = (num1/nnum)*100;
    cout<< fixed << setprecision(2) <<per1<<"%"<<endl;
    float per2 = (num2/nnum)*100;
    cout<< fixed << setprecision(2) <<per2<<"%"<<endl;
    float per3 = (num3/nnum)*100;
    cout<< fixed << setprecision(2) <<per3<<"%"<<endl;
    float per4 = (num4/nnum)*100;
    cout<< fixed << setprecision(2) <<per4<<"%"<<endl;
    float per5 = (num5/nnum)*100;
    cout<< fixed << setprecision(2) <<per5<<"%"<<endl;
}