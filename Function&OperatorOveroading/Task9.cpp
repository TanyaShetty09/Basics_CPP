#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A() {
            a = 0;
        }
        void operator ++() {  //NOTE here "operator" is a keyword. It refers to pre-increment
            a+=3;             //void operator ++(int)   This is the syntax for post-increment
        }
        void print() {
            cout<<a<<endl;
        }
};

int main(){
    A obj;
    for(int i=0; i<5; i++) 
        ++obj;               //If it is obj++; it will give error since post-increment operator is not overloaded
    obj.print();
    return 0;
}

//Output
//15