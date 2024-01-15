#include<iostream>
using namespace std;
#include <bits/stdc++.h>

class Foo{
    public:
        Foo(int i=0){_i=i;}
        void f(){
            cout<<"Hello!"<<endl;
        }
    private:
        int _i;
};


int main() {
    Foo *p = 0;   //Here pointer points to NULL
    p->f();
    return 0;
}


//Output
//Hello!