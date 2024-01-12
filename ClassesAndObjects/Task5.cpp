//Using constructors, this keyword and friend function

#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(){
            a=5;
        }
        friend void modify();
};
void modify(){
    A obj1;
    cout<<"Private memberof class A, "<<obj1.a<<endl;
}
int main(){
    A obj1;
    modify();
    return 0;
}