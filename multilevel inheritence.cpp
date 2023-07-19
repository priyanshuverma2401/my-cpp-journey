
#include<iostream>
using namespace std;

class animal 
{
private:
    int z;
public:
    int x=5;
    static int a;
     void sleep()
    {
        cout<<"animals are sleeping\n";
    };
    void sound()
    {
        cout<<"animals are making sound\n";
    }

};
int animal::a;


class dog: public animal
{
    public:
    void walk()
    {
        cout<<"dog is walking\n";
    }
    void sleep()
    {
        cout<<"dogs are sleeping\n";
    }
     void sound()
    {
        cout<<"dogs are making sound\n";
    }
};

//multilevel inheritance: derived from dog class which is derived from animal
class cat:public dog
{
    public:
        void eat()
        {
           cout<<"cats are eating\n";
        }
};

class cow:public cat
{
public:
    void grazing()
    {
        cout<<"cows are grazing\n";
    }
};

class horse: public animal
{
public:
    void walk()
    {
        cout<<"horse is walking\n";
    }
    void sleep()
    {
        cout<<"horse are sleeping\n";
    }
     void sound()
    {
        cout<<"horse are making sound\n";
    }
};
class person//interface
{
private:
    int xyz;
public:
    int x=6;
    static int b;
    virtual void study() = 0;
    virtual void sing()=0;
};
int person :: b;

class girl:public person
{
public:
    void dance()
    {
        cout<<"girls are dancing\n";
    }
    void study()
    {
        cout<<"girls are studying \n";
    }
    void sing()
    {
        cout<<"girls are singing\n";
    }
};

class boy:public cow,public girl
{
    public:
    void study()
    {
        cout<<"boys are studying \n";
    }
    void sing()
    {
        cout<<"boys are singing\n";
    }
       void work()
    {
        cout<<"boys are working\n";
    }
};

int main()
{
    dog d1;
    girl g1;
    cat c1;
    boy b1;
   
    cout<<"\n\ndogs section \n";
    d1.walk();
    d1.sleep();
    d1.sound();
    
    cout<<"\n\ngirls section \n";
    g1.study();
    g1.sing();
    g1.dance();
    
    cout<<"\n\ncats section \n";
    c1.walk();
    c1.sleep();
    c1.sound();
    c1.eat();
    
    cout<<"\n\nboyss section \n";
    b1.study();
    b1.sing();
    b1.dance();
    b1.walk();
    b1.sleep();
    b1.sound();
    b1.eat();
    
    return 0;
}