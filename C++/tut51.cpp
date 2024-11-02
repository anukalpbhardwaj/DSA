#include<iostream>

using namespace std;

class Complex{
int Real , Imaginary;

public:
void getData(){

    cout<<"The Real part is " << Real <<endl;
    cout<<"The Imaginary  part is " << Imaginary <<endl;
}
void setData(int a, int b){
    Real = a;
    Imaginary = b ;
}

};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;

    //  (*ptr).setData(2,34);
    //  (*ptr).getData();

    Complex *ptr = new Complex;
    ptr-> setData(1,54);
    ptr->getData();
    
    return 0;
}
