//Constructors and Destructor

#include<iostream>
using namespace std;
class myClass{
    int a;
    public:
        myClass(int x) {
            a = x;
            cout<<"Constructor: "<<a<<endl;
        }
        ~myClass(){
            cout<<"Destructor: "<<a<<endl;
        }
};

void myFun(int x) {
    myClass obj1(x);
}

int main(){
    myClass obj1(1), obj2(2), obj3(3); 
    myFun(4);
    myFun(5);
    return 0;
}

//OUTPUT:
// Constructor: 1
// Constructor: 2
// Constructor: 3
// Constructor: 4
// Destructor: 4
// Constructor: 5
// Destructor: 5
// Destructor: 3
// Destructor: 2
// Destructor: 1