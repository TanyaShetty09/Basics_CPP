//Constructors and Destructor

#include<iostream>
using namespace std;
class A{
public:
    A() {
        cout<<"Constructor class A"<<endl;
    }
};

class myClass{
    public:
        static A getvalue() {
            static A a;
            cout<<"Hello"<<endl;
            return a;
        }
};

int main(){
    myClass obj1;
    A obj2 = myClass::getvalue();    //Since method is static it is called using scope resolution operator
    A obj3 = obj1.getvalue();          //Both means same, copying the object
    return 0;
}

//Output
// Constructor class A
// Hello
// Hello


//Since constructor is already called once, "Constructor class A" is printed only once