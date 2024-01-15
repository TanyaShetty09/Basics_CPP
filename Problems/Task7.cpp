#include<iostream>
using namespace std;

class One{
public:
virtual int fun(int x, int y){ return(x++ + ++y + x<<2);
}
};
class Two: public One{
public:
int fun(int x, int y){ return(++x + y+++ y>>2);
}
//virtual int fun2() = 0;      If this sentence is not commented, then this class becomes an abstract class. Hence creating an object for it will give us an error

};
int main(){
One *ptr;
Two obj;
ptr = &obj;
cout<<ptr->fun(2, 3)<<endl;
}


//Output
//2