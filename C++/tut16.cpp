#include<iostream>
using namespace std;

int sum (int a, int b) {

   int c = a + b ;
    return c;
}
// void swap (int a, int b) {

//     int temp = a;
//     a = b ;
//     b = temp;

// }

//Call by reference using pointers ;

// void swapPointer(int*a , int* b) {

//     int temp = *a;
//     *a = * b ;
//     *b = temp;

// }
// int &
void swapReferenceVar(int &a , int &b) {

    int temp = a;
    a =  b ;
    b = temp;
    // return a ;
    
}

int main()
{
    int x = 4 , y = 5;
    //cout <<"The sum of 4 and 5 is " << sum(a,b)<<endl;
    
    cout<< "The value of x is " << x << " and the value of y is " << y <<endl;
   // swappointer (&x,&y);
   //swapReferenceVar(x,y) = 766;
    cout<< "The value of x is " << x<< " and the value of b is "<<y<<endl;
    return 0;
}
