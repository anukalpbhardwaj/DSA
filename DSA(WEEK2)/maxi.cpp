#include<iostream>
using namespace std;
 
 int maxi(int a, int b){

    if (a>b)
    {
      return a;
    }
    else{
       return b;
    }
    
 }


int main() {

int a = 1;
int b =2;

cout<<maxi(a,b);
return 0;
}