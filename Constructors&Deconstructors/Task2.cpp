//Constructors

#include<iostream>
using namespace std;
class A{
    private:                                     
        A(){
            cout<<"Default constructor"<<endl;
        }
    public:
        int a;
        A(int a){                                //Constructor CANNOT be private. It has to be public
            this->a=a;
        }
};
int main(){
    A a(10);  //parametrized constructor will b called. Since parametrized constructor is public v get NO errors
    cout<<a.a<<endl;
    return 0;
}