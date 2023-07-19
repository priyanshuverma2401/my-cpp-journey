#include<iostream>
using namespace std;

int main()
{
//dynamic memory allocation using "new" operator
    int *p1=new(nothrow)int(5);
    cout<<"\nthe value of *p1 is : "<<*p1<<endl;
    float *p2=new(nothrow)float(53.678);
    cout<<"\nthe value of *p2 is : "<<*p2<<endl;
    char *p3=new(nothrow) char('p');
    cout<<"\nthe value of *p3 is : "<<*p3<<endl;
    string *p4=new(nothrow) string("priyanshu12113");
    cout<<"\nthe value of *p4 is : "<<*p4<<endl;

//allocating block of memory using "new"
    int*arr=new(nothrow) int[3];//integer array
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    cout<<"\nthe value of arr[0] is "<<arr[0]<<endl;
    cout<<"\nthe value of arr[1] is "<<arr[1]<<endl;
    cout<<"\nthe value of arr[2] is "<<arr[2]<<endl;

    float*arr2=new(nothrow)float[3];//float array
    arr2[0]=10.12;
    arr2[1]=20.16;
    arr2[2]=30.18;

    cout<<"\nthe value of arr2[0] is "<<arr2[0]<<endl;
    cout<<"\nthe value of arr2[1] is "<<arr2[1]<<endl;
    cout<<"\nthe value of arr2[2] is "<<arr2[2]<<endl;

    char*arr3=new(nothrow)char[3];//char array
    arr3[0]='P';
    arr3[1]='k';
    arr3[2]='V';

    cout<<"\nthe value of arr3[0] is "<<arr3[0]<<endl;
    cout<<"\nthe value of arr3[1] is "<<arr3[1]<<endl;
    cout<<"\nthe value of arr3[2] is "<<arr3[2]<<endl;

    string *arr4=new(nothrow)string[3];//str array
    arr4[0]="priyanshu";
    arr4[1]="verma";
    arr4[2]="Technomintstudy";

    cout<<"\nthe value of arr4[0] is "<<arr4[0]<<endl;
    cout<<"\nthe value of arr4[1] is "<<arr4[1]<<endl;
    cout<<"\nthe value of arr4[2] is "<<arr4[2]<<endl;

//deleting dynamically allocated memory
    delete p1;
    delete p2;
    delete p3;
    delete p4;

//deleting dynamically allocated block of memory
    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
cout<<"\nall memory freed successfully\n";
    return 0;
}