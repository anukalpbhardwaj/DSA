#include<iostream>
using namespace std;
int main() {

int i = 23;
 
 int *p = 0;
  p = &i;

  cout<<"Value is " <<*p <<endl;
  cout<<"Adddresss is " <<p <<endl;

  int num = 6;
  int ptr = num;
  cout<<"ptr before " <<num<<endl;
  ptr++;
 cout<<"ptr after " <<num<<endl;

 int*q = p;
 cout<<" P " <<" - " <<q <<endl;
 cout<<" *P " <<" - " <<*q <<endl;


 int l = 3;
 int*t = &i;
 *t = *t+1;
 cout<< *t ;
 t = t+1;
 cout<<t;
return 0;
}