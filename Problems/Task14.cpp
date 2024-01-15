#include<iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(int x, int y) {
            a = x;
            b = y;
        }
        void swap (A &ob) {        //changed from ob to &ob
            int temp = ob.a;
            ob.a = a; 
            a = temp;
            temp = ob.b;
            ob.b = b; 
            b = temp;
        }
        void print(){
            cout<<a<<b<<" ";
        }
};

int main() {
    A obj1(4, 5), obj2(2, 6);
    obj2.print();                 //obj2.print(); instead of obj1.print();
    obj1.swap(obj2);
    obj2.print();                 ////obj2.print(); instead of obj1.print();
}


//Output
//26 45