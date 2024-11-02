#include<iostream>
using namespace std;

void printNumber(int num){
    cout<< num;
}
int main() {

int a =5;
// printNumber(a);

cout<<"Address of a is " << &a <<endl;
return 0;
}