//Constructors and Destructor

#include<iostream>
using namespace std;
class A{
    public:
        A() {
            cout<<"A";
    }
    A(int x) { 
        cout<<x;
    }
};

class B{
    A obj1;                 //Not while creating class..instead while creating object memory will be allocated after that constructor will be called
    public:
        B() {
            cout<<"B";
        }
};

int main()
{
    B obj1;
    B obj2;
    return 0;
}

//Output
//ABAB