#include<iostream>
using namespace std;

class A{
    public:
        void function(){ 
            cout<<"A";
        }
};
class C{
    public:
        void function(){ 
            cout<<"C";
        }
};

class B: public A, C{
    public:
        void function(){     
            //If void function(){
                // function();
                // cout<<"B";
                // }
                //It leads to stack overflow. Function calls itself recursively
            cout<<"B";     
        }
};

int main() {
    B b;
    b.function();
    return 0;
}


//Output
//B