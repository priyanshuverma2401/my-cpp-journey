#include<iostream>
#include<cstring>
#define DaRate 42.00
using namespace std;
class employee
{
    string name;
    string phoneNumber;
    double basic;
    double dearness;
    double tax;
    float taxRate;
    double netSalary;
    double monthlyTax;
public:
    string returnName()
    {
        return name;
    }
    void setdata();
    void calNetSalary();
   friend void show(employee &);
};
void employee:: setdata()
{
    cout<<"\nEnter name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"\nenter phone number: ";
    cin>>phoneNumber;
    cout<<"\nEnter basic salary: ";
    cin>>basic;
    dearness = (basic*DaRate)/100;
    double annual= (basic+dearness)*12;
    if(annual<250000.00)
    {
        taxRate=0;
        tax=0;
    }
    else if(annual>250000&&annual<=500000)
    {
        taxRate=5.0;
        tax=(taxRate/100)*annual;
    }

    else if(annual>500000&&annual<=1000000)
    {
        taxRate=20.0;
        tax= (taxRate/100)*annual;
    }
    else
    {
        taxRate=30.0;
        tax=tax= (30/100)*annual;
    }
    monthlyTax=(tax/12);
    netSalary=basic+dearness-monthlyTax;
}
void show(employee &emp)
{
    cout<<"\nsalary receipt: \n";
    cout<<"|*************************************"<<endl;
    cout<<"| Name: "<<emp.name<<endl;
    cout<<"| phone no: "<<emp.phoneNumber<<endl;
    cout<<"| basic salary: "<<emp.basic<<endl;
    cout<<"| Dearness allowance: +"<<emp.dearness<<endl;
    cout<<"| Tax reduction: -"<<emp.monthlyTax<<endl;
    cout<<"| (tax rate "<<emp.taxRate<<" applied.)"<<endl;
    cout<<"| net salary: "<<emp.netSalary<<endl;
    cout<<"| ************************************"<<endl;
}
int main()
{
    int ch,c,num;
    cout<<"\nenter total number of employee: ";
    cin>>num;
    employee*ptr[num];
      for(int i=0;i<num;i++)
        {
            employee* emp= new employee;;
            emp->setdata();
            ptr[i]=emp;
        }          
            cout<<"select employee to view details: "<<endl;
            for(int i=0;i<num;i++)
            {
                show(*(ptr[i]));
                cout<<endl;
            }
    return 0;
}