#include<iostream>
using namespace std;

// int getSum(int a, int b){

//     int num = a+b;
//     return num;
// }
int getSum(int a, int b);

int main() {


int a;
cout<<"Enter the value of a" <<endl;
cin>>a;

int b ;
cout<<"Enter the value of b "<<endl;
cin>>b;

int sum = getSum(a,b);

cout<<"Addition result is: " <<sum<<endl;
return 0;
}
int getSum(int a, int b){

    int num = a+b;
    return num;
}