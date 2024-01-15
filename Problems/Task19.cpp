#include<iostream>
using namespace std;

class A {
    static int i;       //since static members do not belong to the object of the class, the size of static variable will not be considered 
    int j;
};

int A::i;

int main() {
    cout << sizeof(A);
    return 0;
}


//Output
//4