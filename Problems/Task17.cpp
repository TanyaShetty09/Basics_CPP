#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(int x) {
             a= x; 
        }
        int fun(){
            return a*a;
        }
        void fun(int x, int y, int z){ 
            cout<<(x*y*z)<<endl;
        }
};

class B: public A{
    int a, b;
    public:
        B(int x, int y): A(y){
            a = x;
            b = y;
        }
        int fun(){
            return a*a+b*b;
        }
};

int main(){
    B obj1(1, 4); 
    cout<<obj1.fun(); 
    obj1.A::fun(1, 4, 4);
}

//Output
//1716