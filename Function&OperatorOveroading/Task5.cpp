#include<iostream>
using namespace std;

class A{
    int a, b;
    public:
        A(int x, int y) {
            a = x; 
            b = y;
        }
        void operator+(A const &obj) {
            a += obj.a;                   //If it is obj.a+=a;  then it will give error since this will change the values of obj, this shouldn't happen since its mentioned as constant in the operator overloading function
            b += obj.b;
        }
        void print(){ 
            cout<<a<<b<<endl;
        }
};

int main()
{
    A obj1(2, 6), obj2(1, 8);
    obj1+obj2;
    obj1.print();
    obj2.print();
}


//Output
//314
//18