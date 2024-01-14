

#include<iostream>
using namespace std;

class A{
    public:
        int add(int x=0, int y=0) {
            return x+y+20;
        }
        // int add(int x, int y){
        //     return x+y;
        // }
};

//The above 2 add() in class A are wrong since both the function mean the samething, the compiler will be confused about which function it is supposed to call 

int main()
{
    int a=2, b=16;
    A obj;
    //cout<<obj.add()<<endl;       
    //Default constructor not created automatically by the compiler since we have createde parametrized constructors..Now we only must create default constructor as well
    cout<<obj.add(a, b)<<endl;
    return 0;
}


//Output
//38