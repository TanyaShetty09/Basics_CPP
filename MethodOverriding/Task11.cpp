#include<iostream>
using namespace std;

class B{
    public:
        virtual void fun1() = 0;             //This is a pure virtual class since it is equated to zero. Now all its derived classes MUST have this particular function along with the definitio. Also this class is now called an abstract class. And objects cannot be created for an abstract class
        void fun2(){
                cout<<"I am Base"<<endl;
        }
};

class D: public B{
    public:
        void fun1(){
            cout <<"Implemented pure virtual function"<<endl;
        }
};

int main(){
    B *ptr;
    D obj;
    ptr = &obj;
    ptr->fun2();
};


//Output
//I am Base