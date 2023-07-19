#include<iostream>
#include<cstring>
#include<stdexcept>
using namespace std;
class student
{
    string name;
    int totalmarks=500;
    int roll;
    float marks;
    char grade;
public:
    student()
    {
        name="no name";
        roll=0;
        marks=0;
        grade='\0';
    }
    string getname()const {
        return name;
    }
    void setdata();
    friend void show(student &);
};
void student:: setdata()
{
    cout<<"name: ";
    cin>>name;
    cout<<"roll number: ";
    cin>>roll;
    cout<<"marks: ";
    cin>>marks;
    float percent= (marks/totalmarks)*100;
    if(percent>90) grade='A';
    else if(percent<90&&percent>60) grade='B';
    else if(percent>30&&percent<60) grade='C';
    else  grade='F';
}
void show(student &s)
{
    cout<<"name: "<<s.name<<endl<<"Roll number: "
        <<s.roll<<endl<<"marks obtained: "<<s.marks
        <<endl<<"Grade: "<<s.grade<<endl;
}
int main()
{
    int n,i,ch,choice=0;
    cout<<"\nEnter total number of student: ";
    cin>>n;
    student*ptr=new student[n];
    try {
        if(ptr)
        {
            bad_alloc error;
            throw error;
        }
        student*temp=ptr;
        for(i=0; i<n; i++) {
            cout<<"\nenter details of students."<<i+1<<endl;
            temp->setdata();
            temp++;
        }
        temp=ptr;
        cout<<"\nselect student to display details: "<<endl;
        do {
            for(i=0; i<n; i++) {
                cout<<i+1<<". "<<temp->getname()<<endl;
            }
            cout<<"\nenter choice: ";
            cin>>ch;

            if(ch>n)
            {
                bad_typeid error;
                throw error;
            }

            show(*(temp+(ch-1)));
            cout<<"\ndo you want to continue: <1/0>";
            cin>>choice;
        }
        while(choice);
    }
    catch(const exception &err) {
        cout<<"exception occured: "<<endl;
        cout<<err.what();
    }

    return 0;
}