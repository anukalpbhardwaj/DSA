#include<iostream>
using namespace std;

int sum (int a, int b){

    return a + b;
}
int sum (int a, int b,int c){

    return a + b +c ;
}
int  volume(int a, int b,int c){

    return a * b *c ;
}
 int main()
 {
   cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl; 
   cout<<"The sum of 3 ,6 and 4 is "<<sum(3,6,4)<<endl; 
   cout<<"The volume of 3 ,6 and 4 is "<<volume(3,6,4)<<endl; 
   
    return 0;
 }
 