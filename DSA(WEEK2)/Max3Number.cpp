#include<iostream>
using namespace std;

int findMax(int a, int b , int c){

    if (a>b && a>c)
    {
        return a;
    }
    else if( b>a && b>c){
         return b;
    }
    
    else{
        return c;
    }
}
int main() {

int a;
cout<<"Enter the first Number"<<endl;
 cin>>a;

int b;
cout<<"Enter the second Number"<<endl;
 cin>>b;

int c;

cout<<"Enter the second Number"<<endl;
 cin>>c;


int maxi = findMax(a,b,c);
cout << "The maximum of three no. are  " << maxi <<endl;

return 0;
}