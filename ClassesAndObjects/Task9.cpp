//using static keywords

#include<iostream>
using namespace std;
class A{
    public:
        static int a;                  // 'a' will have only 1 copy
        void increment() {
            a++;
        }
        int get(){
            return a;
        }
};

int A::a = 10;                  //static member can be accessed using class name
int main(){
    A obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    obj3.increment();
    cout<<obj3.get()<<obj2.get()<<obj1.get()<<endl;
    return 0;
}

// Output:
//131313