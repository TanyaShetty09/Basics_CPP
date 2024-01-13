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
    A obj1;
    public:
        static A ob;            //doesn't make a difference since ob is not used anywhere
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