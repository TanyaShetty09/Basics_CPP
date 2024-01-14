#include<iostream>
using namespace std;

class A{
    public:
        int fun(int x) {
            return x*x;
        }
        // int fun(int &x) {
        //     return x*10;
        // }
        //Error since &x and x mean the saem. The compiler will be confused about which funstion it should call
};

int main() {
    int a=2;
    A obj;
    cout<<obj.fun(a);
    return 0;
}

//Output
//4