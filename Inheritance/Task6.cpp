#include<iostream>
using namespace std;
class A{
    public:
        A(int x) {
            cout<<"A"<<x;
        }
}; 

class B: public A{
    public:
        B(int x, int y): A(y){ 
            cout<<"B"<<x;
        }
};

class C: public B{
    public:
        C(int x, int y, int z): B(y, z){      //C(int x, int y, int z): A(y), B(x,z)     This gives error since class A is not directly inherited by class C..this is applicable only to constructors and not to the functions 
            cout<<"C"<<x;
        }
};

int main(){
    C obj (2, 5, 9);
    return 0;
}

//Output
//A9B5C2
