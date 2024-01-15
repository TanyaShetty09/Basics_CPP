//object of base class can store address of object of derived class 

#include<iostream>
using namespace std;

class B{
    int a;
    public:
        void fun(){
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
    B b = D();  //object of base class can store address of object of derived class 
    b.fun();     
    return 0;
}


//Output
//Base class