#include<iostream>
using namespace std;

int fun(int &b, int &a) {
    static int z=4;   //since it is static, there only be one copy of z. hence the while loop will not entire infinite looping state
    while(--z>0) {  
        fun(b, a);
        a*=2;
        b--;
    }
    return a+b+10;
};

int main() {
    int a=5, b=7;
    cout<<fun(a, b)<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}


//Output
//68
//2 56