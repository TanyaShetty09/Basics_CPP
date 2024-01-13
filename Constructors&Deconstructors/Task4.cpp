//Constructors

#include <iostream>
using namespace std;
class myClass{
    public:
        char ch;
        int a, b; 
        myClass() {       
            a=0; b=0; ch='a';
        }
        myClass(char c){
            ch = c;
        }
        myClass(int x, int y){
            a = x; 
            b = y;
        }
        void get(){
            cout<<a<<" "<<b<<" "<<ch<<endl;
        }
};

int main(){
    myClass ob1, ob2('Z'), ob3(4, 8);         //Some garbage values are also got in the output
    ob1.get();
    ob2.get();
    ob3.get();
    return 0;
}

// // Output:
// 0 0 a
// 6422280 2001698205 Z
// 4 8 �