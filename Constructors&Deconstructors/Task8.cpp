//Constructors and Destructor

#include <iostream>
#include <string>
using namespace std;
class A{
    int a;                        //Non static data members belongs to objects
    public:
    A() {
        a = 10;
        cout<<"Default constructor: "<<a<<endl;
    }
    A(const A &q) {
        a=q.a;
        cout<<"Copy Constructor: "<<a<<endl;
    }
    void set_a(int x) {
        a = x;
    }
};

int main()
{
    A obj; 
    obj.set_a(11);
    A al = obj;              //same as 
    A a2(obj);               //this
    return 0;
}

//Output
// Default constructor: 10
// Copy Constructor: 11
// Copy Constructor: 11