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
            A obj; 
            cout<<"B";
            obj.function();  //Here obj refers to class A
        }
};

int main(){
    B b;
    b.function();
    return 0;
}

//Output
//BA