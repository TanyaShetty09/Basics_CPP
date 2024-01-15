#include<iostream>
using namespace std;

class B{
    int a;
    public:
        virtual void fun(){               
            //If static virtual void fun(){}      we get an error since a virtual class cannot be static. Static means that it belongs to only that class and not the objects, whereas virtual is meant for the purpose of overriding. Hence it gives error
            cout<<"Base class"<<endl;
        }
};

class D: public B{
    int a;
    public:
        void fun(){
            cout<<"Derived class"<<endl;
        }
};

int main(){
    B obj1;
    D obj2;
    D *b= &obj2;    //This line is only changed
    //If  D *b= &obj1;    We get an error since only the object of base class can store address of object of derived class and not vice-versa
    b->fun();
    return 0;
}


//Output
//Derived class