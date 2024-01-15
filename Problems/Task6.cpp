#include<iostream>
using namespace std;

class B{
    public:
    B() {
        cout<<"Class B"<<endl;
    }
};

class C{
    public:
        C() {
            cout<<"Class C"<<endl;
        }
};

class D: public C, public B{           //If class D: public C, B{}    then it gives us an error. This by deafault means class B is inherited as private
    public:
        D() {
            cout<<"Class D"<<endl;
        }
};

int main() {
    B *b=new D();
    return 0;
}


//Output
// Class C
// Class B
// Class D