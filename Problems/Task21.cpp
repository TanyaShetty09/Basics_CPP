#include<iostream>
using namespace std;

class Host{
    public:
        //Host h;       we CANNOT create an object of a class before its definition is completed
        class Nested{
            public:
                void print() {
                    cout << "Hello world"<<endl;
                }
        };
};

int main(){
    Host::Nested fun;       //If Host fun;  then we get an error since Host cannot access the functions of Nested class directly.
    //Nested fun;   this will also give an error since the compiler cannot find class Nested as it is present inside the Host Class. Therefore we need to resolve it for the compiler
    fun.print();
    return 0;
}


//Output
//Hello world