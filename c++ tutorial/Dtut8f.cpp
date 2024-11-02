#include<iostream>

using namespace std;

int main(){

    int n ;
    cout<<"Enter the amount "<<endl;
    cin>>n;
    int Rs2000,Rs500,Rs200,Rs100,Rs50,Rs20,Rs10,Rs5,Rs2,Rs1;

    switch(1){
case 1:
Rs2000 = n / 2000;
n = n % 2000;
cout<<"The  no of 2000 notes are : "  <<Rs2000 <<endl;

case 2:
Rs500 = n / 500;
n = n %500;
cout<<"The no of 500 notes are : " << Rs500<<endl;
case 3:
Rs100 = n / 100;
n = n % 100;
cout<<"The  no of 100 notes are : " <<Rs100<<endl;

case 4:
Rs50 = n / 50;
n = n %50;
cout<<"The no of 50 notes are : " <<Rs50 <<endl;
case 5:
Rs20 = n / 20;
n = n % 20;
cout<<"The  no of 20 notes are : "  <<Rs20<<endl;

case 6:
Rs10 = n / 10;
n = n %10;
cout<<"The no of 10 notes are : "  <<Rs10<<endl;
case 7:
Rs5 = n / 5;
n = n % 5;
cout<<"The  no of 5 notes are : "  <<Rs5<<endl;

case 8:
Rs2 = n / 2;
n = n %2;
cout<<"The no of 2 notes are : "<<Rs2 <<endl;
case 9:
Rs1 = n / 1;
n = n % 1;
cout<<"The  no of 1 notes are : " <<Rs1 <<endl;




    }
}