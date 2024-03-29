//Calculate the output on n = 13

#include<iostream>
using namespace std;


int fun1(int);
int fun2(int);

int fun1(int n){
    if(n<=1) 
        return 1;
    return fun2(n-2) + fun1(n-1);
}

int fun2(int n) {
    if(n<=0) 
        return 0;
    if(n%3==0) 
        return fun2(n/2);
    else 
        return fun1(n-3);
}

int main(){
    int n;
    cout<<"Enter integer: ";
    cin>>n;
    cout<<fun2(n)<<endl;
    return 0;
}


//Output
//Enter integer: 13
//14