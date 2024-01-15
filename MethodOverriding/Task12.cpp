#include<iostream>
using namespace std;

class A{
    public:
        virtual void fun1() = 0;
        void fun2(){
            cout<<"I am Base"<<endl;
        }
};

class B: public A{
    public:
        void fun1(){
            cout <<"Implemented PVF A"<<endl;
        }
        virtual void fun3() = 0;
};

class C: public B{                  //Here fun1() need not be defined again since it is once defined in class B and class C is derived from class B
//if  class C: public B,A{}   then it needs to define both fun1() and fun2()
    public:
        void fun3(){
            cout<<"Implemented PVF B"<<endl;
        }
};

int main() {
    C obj; 
    // If here we include " A obj1;"    it gives an error since class A is a pure virtual class,ie, an abstract class it cannot have an object 
    obj.fun2();
    return 0;
}

//Output
//I am Base