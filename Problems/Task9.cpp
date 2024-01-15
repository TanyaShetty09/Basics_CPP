#include<iostream>
using namespace std;

class B{
    public:
        virtual ~B()=0;
};

B::~B() {
    cout<<"Implemented PVF"<<endl;
}
//Destructor of one class cannot be defined inside another class. Hence we declare it globally

class D: public B{
    public:
        ~D() {
            cout<<"Derived destructor"<<endl;
        }
        // ~B() {
        //     cout<<"Implemented PVF"<<endl;
        // }
        //This will gives an error cause any class cannot contain destructor of some other class
};

int main(){
    B *b=new D();
    delete b;
    return 0;
}


//Output
// Derived destructor
// Implemented PVF