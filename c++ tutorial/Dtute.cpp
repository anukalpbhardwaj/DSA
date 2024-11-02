#include<iostream>
using namespace std;
int main() {
char a;
cout<<"Enter the value "<<endl;
cin>>a;

if( a <= 'z' && a>= 'a'){

    cout<<"This is lower case";
}
if( a <= 'Z' && a>= 'A'){

    cout<<"This is upper case";
}
if(a <= '9' && a>= '0'){

    cout<<"This is Numerix";
}
else{
    cout<<"Default";
}


}