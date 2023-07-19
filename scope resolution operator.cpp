#include<iostream>
using namespace std;
int Value =50;

int main()
{
    int Value =60;
    {
    int Value =90;
    cout<<"\nin inner block: "<<Value<<endl;
    }
    cout<<"\nin main block: "<<Value<<endl;
    cout<<"\nin global scope: "<<::Value<<endl;
    return 0;
}