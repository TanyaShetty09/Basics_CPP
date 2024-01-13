#include<iostream>
using namespace std;
class A{
    int a;
    friend void modify(A &ob);         //&ob instead of just ob
    public:
    A() {
        a = 5; 
    }
    void get() { 
        cout<<a<<endl;
    }
};

void modify(A &ob) {                //NOTE &ob
    ob.a += 13;
}

int main(){
    A obj;
    obj.get();
    modify(obj);
    obj.get();
    return 0;
}

// Output:
//5
//18