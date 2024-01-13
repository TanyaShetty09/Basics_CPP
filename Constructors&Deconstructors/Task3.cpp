//Constructors

#include<iostream>
using namespace std;
class myClass{
    int a;
    public:
        myClass(int x) {                  //Since we created a constructor, default constructor will ot b created
            a = x;
            cout<<"Constructor: "<<a<<endl;
        }
        int getvalue() {
            return a;
        }
};

int main(){
    myClass obj1(1); //obj2;                //We get error since obj2 has no matching constructor
    obj1.getvalue();
    //obj2.getvalue();                      //Gives Error
    return 0;
}

//Since some lines are commented v get the output as 1


// Output:
// Constructor: 1