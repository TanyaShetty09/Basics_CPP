//Constructors

#include<iostream>
using namespace std;
class myClass{
    public:
        char ch;
        int a,b;
        myClass(){                                //Constructor CANNOT be private. It has to be public
            cout<<"Default constructor"<<endl;
        }
};

int main(){
    myClass obj;
    return 0;
}

// Output:
//Default constructor