#include<iostream>
using namespace std;
string washingM(int age,int wMp,int toyp);
main()
{
    int age,wMp,toyp;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of the washing machine: ";
    cin>>wMp;
    cout<<"Enter the unit price of each toy: ";
    cin>>toyp;
    string output=washingM(age,wMp,toyp);
    cout<<output;
}
string washingM(int age,int wMp,int toyp)
{
    int rupee = 0;
    int even = 0,odd = 0;
    int toy= 0,amount = 0,total1 = 0;
    string result;
    for(int x=1; x<age ;x=x+2)
    {
        odd = odd + 1;
    }
    toy = toyp * odd;
    for (int y=2; y<= age; y = y + 2)
	{
		rupee = rupee + 10;
		even = even + rupee;
		even = even - 1;
	}
    total1 = toy + even;
	if (total1 >= wMp)
	{
		amount = total1 - wMp;
		result = "Yes!\n"+ to_string(amount);
	}
	else if (total1 < wMp)
	{
		amount = wMp - total1;
		result = "No!\n"+ to_string(amount);
	}

	return result;
}  
