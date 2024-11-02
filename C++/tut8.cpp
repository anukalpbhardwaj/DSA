#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
  /*  int a = 45 ;
    cout<<"The value of a was : " <<a ;

    a= 50 ;
    cout <<"The value of a is : " <<a;*/

    // constants in c++ 

     /*const int a = 45 ;
    cout<<"The value of a was : " <<a ;

        a= 50 ;  // You will get an error because a is a constant.
    cout <<"The value of a is : " <<a; */
     // manipulators in c++

     int a =3, b = 24 , c = 234 ;

     cout<<"The value of a is without setw:" << a<< endl;
     cout<<"The value of b is without setw:" << b<< endl;
     cout<<"The value of c is without setw:" << c<< endl;

     cout<< "Tha value of a is : "<<setw(4)<< a << endl ;
     cout<< "Tha value of b is :"<<setw(4)<< b<< endl ;
     cout<< "Tha value of c  is :"<<setw(4) << c << endl ;

     //operator precidence

     /*int a = 3 , b=4;
     int c = (a*b) +5 ;
     cout<<c ;*/



            return 0;
}
