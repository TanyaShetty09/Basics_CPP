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
        B(int x): A(x) {       // :A(x) is must. since B is inherited from A, the compiler looks for A's constructor, since default constructor cannot be found because we explicitly created a parameterized constructor, it will give us an error 
          cout<<"B"<<x;
        }
};

int main(){
    B obj(12);
    return 0;
}

//Output
//A12B12