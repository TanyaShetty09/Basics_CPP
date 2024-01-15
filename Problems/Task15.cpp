//Calculate the output on input n = 16337893829345

#include<iostream>
using namespace std;

long long fun(long long n) {
    long long result = 0;
    while(n!=0) {
        result = result*10 + n%10;
        n/= 10;
    }
    return result;
}

int main(){
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}


//Output
//Enter a number: 16337893829345
//54392839873361