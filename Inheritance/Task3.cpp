#include<iostream>
using namespace std;
class A{
    public:
        A() {
            cout<<"A";
        }
};

class C{
    public:
        C() {
            cout<<"C";
        }
};

class B: public C, A{
    public:
        B() {
            cout<<"B";    
        }
};

int main(){
    B obj;
    return 0;
}


//Output
//CAB