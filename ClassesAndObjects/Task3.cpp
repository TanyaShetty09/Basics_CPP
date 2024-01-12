//Using constructors and this keyword

#include<iostream>
using namespace std;
class A{
    public:             
        int a,b;
        A(int a,int b){
            this->a=a;
            this->b=b;
        }
        int getSum(){
            return (a+b);
        }
};
int main(){
    A obj1(3,7);
    A *ptr;
    ptr=&obj1;
    (*ptr).a=5;                               //*ptr.a=5;   ERROR
    cout<<obj1.getSum()<<endl;
    return 0;
}