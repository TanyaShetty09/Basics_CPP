//Overriding doesn't come into picture since v r not all creating object for derived class. Also v r not creating pointers here

#include<iostream>
using namespace std;

class One{
    public:
        virtual int fun(int x, int y) {       //This will be called
            return(x++ + ++y + x<<2);
            }
};

class Two: public One{
    public:
        int fun(int x, int y){
            return(++x + y++ + y>>2);
        }
};

int main(){
    One obj = Two();            //Here object of cass One is created 
    cout<<obj.fun(2, 3)<<endl;
}


//Output
//36