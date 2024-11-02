#include<iostream>
using namespace std;
int main() {
float c;
cout<<"Enter the temperature "<<endl;
cin>>c;

float k=0;
while(k<=c){

k= c +273.15;
c++;
}
cout<< "value in kelvin "<< k <<endl;
return 0;
}