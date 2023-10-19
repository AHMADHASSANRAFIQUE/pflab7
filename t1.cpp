#include<iostream>
using namespace std;
void mtable(int num,int table);
main()
{
    int table;
    cout<<"Enter a number: ";
    cin>>table;
    int num;
    mtable(num,table);
}
void mtable(int num,int table)
{
    
    int multiply = 1;
    for(num=1;num<=10;num=num+1)
    {
        multiply = table*num;
        cout<<table<<" x "<<num<<" = "<<multiply<<endl;
    }
}
