#include<iostream>
#include<string>
#define totalmarks 600
using namespace std;
class academics
{
protected:
    int ese;
    int ia;
    int total;
public:
    void setAcademicData()
    {
        cout<<"\nenter marks obtained in ESE: ";
        cin>>ese;
        cout<<"\nenter marks obtained in IA: ";
        cin>>ia;
        total=ese+ia;
    }
};
class sports
{
protected:
    int score;
    string sportName;
public:
    void setSportData()
    {
        cout<<"\nenter name of sport: ";
        cin>>sportName;
        cout<<"\nenter score point out of 100: ";
        cin>>score;
    }
};
class student:public academics,public sports
{
    string name;
    int roll;
    int totalScore;
    float percent;
    char grade;
public:
    void setData()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter roll no.: ";
        cin>>roll;
        totalScore=total+score;
        percent=(totalScore/600.00)*100;
        if(percent>90) grade='A';
        else if(percent<90&&percent>60) grade='B';
        else if(percent>30&&percent<60) grade='C';
        else  grade='F';
    }
    void show();
};
void student::show()
{
    cout<<"               REPORT CARD               "<<endl;
    cout<<"|*****************************************"<<endl;
    cout<<"|Name: "<<name<<endl;
    cout<<"|Roll no.: "<<roll<<endl;
    cout<<"|academic marks: "<<total<<endl;
    cout<<"|sports name: "<<sportName<<endl;
    cout<<"|score point: "<<score<<endl;
    cout<<"|total (academic+sports): "<<totalScore<<endl;
    cout<<"|marks(in percent): "<<percent<<endl;
    cout<<"|grade : "<<grade<<endl;
    cout<<"|*****************************************"<<endl;
    cout<<"\nRemarks: ";
    float per=(totalScore/600)*100;
    if(per>=90)
        cout<<"this is good";
    else if(per<=89&&per>=60)
        cout<<"this is also good.";
    else
        cout<<"this is also good because effort matters marks no";
    cout<<endl;
}
int main()
{
    student s1;
    student *ptr=&s1;
    ptr->setAcademicData();
    ptr->setSportData();
    ptr->setData();
    ptr->show();
    return 0;
}