#include<iostream>
using namespace std;
class A{
    public:             //By default its private
        int a;
        void modify_a(int x){
           a=x;
    }
};
int main(){
    A a;
    a.modify_a(10);
    cout<<a.a<<endl;
    return 0;
}