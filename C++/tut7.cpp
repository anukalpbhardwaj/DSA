#include<iostream>
using namespace std ;

int c= 45;

int main()
{

    /****** Build in data types  ****/
    // int a, b , c ;

     /*cout<<" Enter the value of a is : "  <<endl ;
     cin>> a ;
     cout<<"Enter the value of b is :"<<endl ;
     cin>> b;
    c= a +b ;
     cout<< "The sum is "<<c <<endl ;
     cout<<"The global c is " << ::c ;  //:: it is called as scope resolution*/

            /*Float ,double , long doub;le literals */
      /* float d = 34.6f;
     long double e = 34.6L;
     cout<< "The value of d is " <<d << endl <<  "the value of e is " << e <<endl;

     cout<<"The size of 34.6 is " << sizeof(34.6) << endl ;
     cout<<"The size of 34.6l is " << sizeof(34.6) << endl ;
     cout<<"The size of 34.6L is " << sizeof(34.6) << endl ;
     cout<<"The size of 34.6F is " << sizeof(34.6) << endl ;
     cout<<"The size of 34.6f is " << sizeof(34.6) << endl ; */

     // Refrence variable 
     //qudu ---> qudusiua -----> darling ----> baby

     /*float x = 300;
     float & Y = x ;
     cout << x << endl ;
     cout << Y<< endl ; */

     /*** typecasting *****/

     int a  = 45 ;
     float b = 45.46 ;
     cout<< " The value of a is " <<(float) a << endl ;
     cout<< " The value of b is " << (int)b <<  endl ;

     cout<< "The expression is "<< a+b <<endl ;
     cout<< "The expression is "<< a+ (int)b <<endl ;
     cout<< "The expression is "<< a+ int(b) <<endl ;



    return 0;
}
