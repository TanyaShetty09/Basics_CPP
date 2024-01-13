//Using constructors, this keyword and friend function

#include<iostream>
using namespace std;
class Distance{
    private:
        int meter;
        friend int addFive(Distance);
    public:
        Distance(){
            meter=0;
        }
};

int addFive(Distance d){         //Global Function, since scope resolution is not used
    d.meter+=5;
    return d.meter;
}

int main(){
    Distance D;
    cout<<"Distance: "<<addFive(D);
    return 0;
}

// Output:
//Distance: 5