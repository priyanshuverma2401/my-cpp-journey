#include<iostream>
#include<cstring>
#include<stdexcept>
#include<vector>

#define DaRate 52.00
#define taxRate 30.00

using namespace std;
class employee
{
    string name;
    string phoneNumber;
    double basic;
    double dearness;
    double tax;
    double netSalary;
    double monthlyTax;
public:
    string returnName()
    {
        return name;
    }
    void setdata();
    void calNetSalary();
    void show();
};
void employee:: setdata()
{
    cout<<"\nEnter name: ";
    cin>>name;
    cout<<"\nenter phone number: ";
    cin>>phoneNumber;
    cout<<"\nEnter basic salary: ";
    cin>>basic;
    dearness = (basic*DaRate)/100;
    double annual= (basic+dearness)*12;
    if(annual<250000.00)
    {
        tax=(taxRate/100)*annual;
    }
    else if(annual>250000&&annual<=500000)
    {
        tax=(taxRate/100)*annual;
    }

    else if(annual>500000&&annual<=1000000)
    {
        tax= (taxRate/100)*annual;
    }
    else
    {
        tax=tax= (30/100)*annual;
    }
    monthlyTax=(tax/12);
    netSalary=basic+dearness-monthlyTax;
}
void employee::show()
{
    cout<<"\nsalary receipt: \n";
    cout<<"|*************************************"<<endl;
    cout<<"| Name: "<<name<<endl;
    cout<<"| phone no: "<<phoneNumber<<endl;
    cout<<"| basic salary: "<<basic<<endl;
    cout<<"| Dearness allowance: +"<<dearness<<endl;
    cout<<"| Tax reduction: -"<<monthlyTax<<endl;
    cout<<"| (tax rate "<<taxRate<<" applied.)"<<endl;
    cout<<"| net salary: "<<netSalary<<endl;
    cout<<"| ************************************"<<endl;
}
int main()
{
    int ch,c;
    vector<employee>list;
    do {
        cout<<"1. add employee"<<endl;
        cout<<"2. show details"<<endl;
        cin>>ch;

        if(ch==1)
        {
            employee* emp= new employee;;
            emp->setdata();
            list.push_back(*(emp));
        }
        else {
            int j=1;
            cout<<"select employee to view details: "<<endl;
            for(vector<employee>::iterator itr=list.begin(); itr!=list.end(); itr++)
            {
                cout<<j<<". "<<itr->returnName()<<endl;
                j++;
            }
            int sel;
            cin>>sel;

            list[sel-1].show();
        }

        cout<<"\ndo you want to continue : <0/1>"<<endl;
        cin>>c;
    }
    while(c);

    return 0;
}