#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct employee {
    string name;
    int id;
    float age;
    string vhno;
    string add;
    float salary;
};
struct employee* setdata(struct employee *ptr)
{
char fullname[50];
    cout<<"\nName(first name only): ";
    cin>>ptr->name;
    cout<<"\nid: ";
    cin>>ptr->id;
    cout<<"\nAge: ";
    cin>>ptr->age;
    cout<<"\nvehicle number: ";
    cin>>ptr->vhno;
    cout<<"\ncity: ";
    cin>>ptr->add;
    cout<<"\nsalary: ";
    cin>>ptr->salary;
    return ptr;
}
void show(struct employee* ptr)
{
    cout<<"\nName: "<<ptr->name;
    cout<<"\nid: "<<ptr->id;
    cout<<"\nAge: "<<ptr->age;
    cout<<"\nvehicle number: "<<ptr->vhno;;
    cout<<"\naddress: "<<ptr->add;
    cout<<"\nsalary: "<<ptr->salary;
}
int main()
{
    bool choice;
    int sel,select;
    vector<employee>vec;
    static int count=1;
    do {
        cout<<"1. add details\n2. view details"<<endl;
        cin>>sel;
        if(sel==1) {
            cout<<"\nEnter details of employee "<<count<<" :\n";
            struct employee*ptr=new employee;
            ptr=setdata(ptr);
            vec.push_back(*(ptr));
            count++;
        }
        else {
        int j=1;
        cout<<"\nselect employee to show details:"<<endl;
            for(vector<employee>::iterator itr=vec.begin(); itr!=vec.end(); ++itr)
            {
      cout<<j<<". "<<itr->name<<endl;
     j++;
            }
            cin>>select;
            show(& vec[select-1]);
        }
        cout<<"\nDo you want to continue with program<0/1>"<<endl;
        cin>>choice;
        cout<<endl<<endl;
    }
    while(choice);
    return 0;
}