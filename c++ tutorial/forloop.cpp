#include<iostream>
using namespace std;
int main() {

int n ;
cout<<"Enter the value " <<endl;
cin>>n;

cout<<"Print  counting  from 1 to n " <<endl ;
int i = 1;
for(;  ; ){
if(i <=n ) {
cout<< i <<endl ;

}
else{

    break;
}
    
    i ++;
}
return 0;
}