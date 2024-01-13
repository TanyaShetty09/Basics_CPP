//Constructors and Destructor

#include<iostream>
using namespace std;
class myClass{
    int a;
    public:
        myClass(int x) {
            a = x;
            cout<<"Constructor: "<<a<<endl;
        }
        ~myClass(){
            cout<<"Destructor: "<<a<<endl;
        }
};

void myFun(int x) {
    static myClass obj1(x);                //Function made static
}                
                           // Scope of Destructor of static is when the program ends
int main(){
    myClass obj1(1), obj2(2), obj3(3); 
    myFun(4);
    myFun(5);
    cout<<"Scope of main function ends here"<<endl;
    return 0;
}

//OUTPUT:
// Constructor: 1
// Constructor: 2
// Constructor: 3
// Constructor: 4
// Scope of main function ends here
// Destructor: 3
// Destructor: 2
// Destructor: 1
// Destructor: 4