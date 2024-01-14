//During encapsulation, i.e, procedure for hiding data, if u only want to bind the data members n not the functions, then use structure instead of class. So for Linked list we use structure, n not classes. Classes r used when methods n data are binded together to achieve encapsulation.

#include<iostream>
using namespace std;

class A{
    public:
        void function(){
            cout<<"A";
        }
};

class B{
    public:
        void function(){ 
            cout<<"B";
        }
};

int main() {
    A a;
    a.function();
    B b;
    b.function();
    return 0;
}


//Output
//AB