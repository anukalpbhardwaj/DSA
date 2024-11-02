#include<iostream>

using namespace std;
 
 struct employee
 {
    int eID ;
    char favchar ;
    float sallery;
 };
 


int main()
{
    struct employee anukalp;
     anukalp.eID = 1;
     anukalp.favchar = 'c';
     anukalp.sallery = 100;

     cout<< "The value is "<<anukalp.eID<<endl;
     cout<< "The value is "<<anukalp.favchar<<endl;
     cout<< "The value is "<<anukalp.sallery<<endl;
    return 0;
}
