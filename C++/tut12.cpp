#include<iostream>

using namespace std ;

int main()
{
    //What is a pointer??
    // ---> data types which hold the address of other datatype.

    int a =3;
    int* b = &a;
    cout<<b <<endl;

    // & ---> Adress of operator
    // * --->(Value at) Dereference of operator

    cout<<"The address of a is " << &a <<endl ;
    cout<<"The address of a is " << b <<endl ;
    //cout<<"The value at address  a is " << *a <<endl ;
    cout<<"The value at address  b is " << *b <<endl ;
    
    
    //pointer to pointer

    int** c = &b;

    cout<<"The address of b is" << c<<endl;
    cout<<"The address of b is" << &b<<endl;
    cout<<"The value at address c is"<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    int***d = & c;
    cout<<"The address of c is "<< d<< endl;
    cout<<"The address of c is "<< &c<<endl;
    cout<<"The  value at address d is"<<**d<<endl;
    cout<<"The  value at address value_at(value_at(value_at(d))) is  "<<***d<<endl;


    return 0;
}
