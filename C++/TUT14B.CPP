#include<iostream>

using namespace std;
 
//  typedef struct employee
//  {
//     int eID ;
//     char favchar ;
//     float sallery;
//  } ep;


//  union money
//  {
//     int rice ;
//     char car ;
//     float pounds;
//  } ;


int main()
{


    enum Meal  { breakfast,lunch,dinner };

    Meal m1 = breakfast;
    cout <<(m1==0);
//   Meal m2 = lunch;    
//   cout<<m2;
//   Meal m3 = dinner;
//   cout<<m3; 


    //  cout<<breakfast;
    //  cout<<dinner;
    //  cout<<lunch;
    // ep anukalp;

    // union money m1 ;
    // m1.rice = 40;
    // m1.car ='c';
    // cout<<m1.rice <<endl;
    
    // cout<<m1.rice <<endl;
    // cout<<m1.car <<endl;

    //  anukalp.eID = 1;
    //  anukalp.favchar = 'c';
    //  anukalp.sallery = 100;

    //  cout<< "The value is "<<anukalp.eID<<endl;
    //  cout<< "The value is "<<anukalp.favchar<<endl;
    //  cout<< "The value is "<<anukalp.sallery<<endl;
    return 0;
}
