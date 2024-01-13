//using static keywords

#include<iostream>
using namespace std;
class A{
    public:
        static int a;                  // 'a' will have only 1 copy
        static void increment() {         //changed to a static function
            a++;
        }
        static int get(){
            return a;
        }
};

int A::a = 10;  
                //static member can be accessed using class name
int main(){
    A obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    A::increment();               //way of calling static method.  This increment also executes
    cout<<obj3.get()<<endl;
    return 0;
}

// Output:
//13