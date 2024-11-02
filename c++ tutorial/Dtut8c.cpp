#include<iostream>
using namespace std;

int main(){

int num = 2;
cout<<endl;
switch(num){

    case 1 :
    cout<<"First";
break;
    // continue;

    case 2 :
   for (int i = 0; i <= 5; i++)
   {
    cout<<" num  is equal to :" <<num <<endl;
    
    continue;
   }
   
   break;
 

    case 3:
    cout<<"Third";
    break;

    default:
    cout<<"This is default " <<endl;

}
    return 0;
}
