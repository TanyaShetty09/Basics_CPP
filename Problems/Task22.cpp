//Calculate the output on s = "abac" (without quotes)

#include<iostream>
using namespace std;

void gun(string s) {
    if(s[0]=='\0') 
        return;
    gun(s.substr(1));
    cout<<s[0];
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    gun(s);
    cout<<endl;
    return 0;
}


//Output
// Enter string: abac
// caba