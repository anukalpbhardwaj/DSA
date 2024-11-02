#include<iostream>

using namespace std ;
//There are two type of header files
// 1.System header file .It comes with the compiler.
// 2.User defined header file. It is written by programmer
  //https://en.cppreference.com/w/cpp/header





int main()
{
    int a= 4 ,b=5;
    cout << "operators in c++ :" << endl ;
    cout << " Following are the type of operators in c++ :" << endl ;
    //Arithmetic operator

    cout <<"The value of a+b :" << a+b <<endl ;
    cout <<"The value of a-b :" << a-b <<endl  ;
    cout <<"The value of a*b :" << a*b <<endl  ;
    cout <<"The value of a/b :" << a/b <<endl  ;
    cout <<"The value of a%b :" << a%b <<endl  ; 
    cout <<"The value of a++ :" << a++ <<endl ;
    cout <<"The value of a-- :" << a-- <<endl  ;
    cout <<"The value of ++a :" << ++a <<endl  ;
    cout <<"The value of --a :" << --a <<endl  ;
    
    //Assignment operator -->used to assign value to variables 

     // int a = 3 , b= 9 ;
     //char d = 'd';

    //comparison operator
    cout << " Following are the type of comparison operators in c++ :" << endl ;

     cout << "Thr value of a==b " << (a==b) <<endl ;
     cout << "Thr value of a!=b " << (a!=b) <<endl ;
     cout << "Thr value of a>b " << (a>b ) <<endl ;
     cout << "Thr value of a<b " << (a<b) <<endl ;
     cout << "Thr value of a>=b " << (a>=b) <<endl ;
     cout << "Thr value of a<=b " << (a<=b) <<endl ;

     cout << " Following are the  logical operators in c++ :" << endl ;

     cout << "The value  of this  logical and operator ((a==b) && (a<b)) is :" <<((a==b) && (a<b)) <<endl;
     cout << "The value  of this  logical or operator ((a==b) || (a<b)) is :" <<((a==b) || (a<b)) <<endl;
  
    return 0;
}
