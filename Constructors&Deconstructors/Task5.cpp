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
        ~myClass(){                                    //Automatically Called when the scope of the object ends
            cout<<"Destructor: "<<a<<endl;            //Destructor is called in the reverse order of constructor
        }
};

int main(){
    myClass obj1(1), obj2(2), obj3(3);
    return 0;
}

//OUTPUT:
// Constructor: 1
// Constructor: 2
// Constructor: 3
// Destructor: 3
// Destructor: 2
// Destructor: 1