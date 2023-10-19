#include <iostream>
using namespace std;

string price(int rupee, int yrr);
main()
{
    int rupee;
    int yrr;
    cout << "Enter Money: ";
    cin >> rupee;
    cout << "Enter year: ";
    cin >> yrr;
    cout << price(rupee, yrr);
}

string price(int rupee, int yrr)
{
    int odd = 0;
    int even = 0;
    int sum = 0;
    int z = 1;
    string standard;
    for (int x = 1800;x <= yrr;x = x+1)
    {
        if (x % 2 == 0)
        {
            even=even+1;
        }
        if (x % 2 == 1)
        {
            odd=odd+1;
        }
    }
    int evenyrr = 12000 * even;
    for (int y = 1; y <= odd;y = y+1)
    {
        
        sum = sum + 12000 + 50 * (18 + z);
        z = z + 2;
    }
    int result = evenyrr + sum;
    if (rupee > result)
    {
        int result1 = rupee - result;
        standard = "Yes! He will live a carefree life and will have " + to_string(result1) + " dollars left.";
    }
    if (rupee < result)
    {
        int result1 = result - rupee;
        standard = "He will need " + to_string(result1) + " dollars to survive.";
    }
    return standard;

}