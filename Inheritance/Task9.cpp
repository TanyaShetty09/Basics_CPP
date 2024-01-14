#include<iostream>
using namespace std;

class A{
    public:
        A(int x) {
            cout<<"A"<<x;
        }
        void get(){cout<<" Hello world ";}

};

class B: protected A{
    public:
        B(int x, int y): A(y){
            cout<<"B"<<x;
        }
};

class C: public B{
    public:
        C(int x, int y, int z): B(y, z){
        get();                                 //Since it is a protected function it can only be called within the class and not outside of the class
        cout<<"C"<<x;
    }
};

int main(){          
    A a(20);
    a.get();
    return 0;
}


//Output
//A20 Hello world 