#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
cout<<"Printing the array "<<endl;
for (int i = 0; i < size; i++)
{
    cout<< arr[i] <<" " ;
}
cout<<"Printing done "<<endl;

}


int main() {
int number[15] ;
// cout<<"Value at 0 index " <<number[0]<<endl;
cout<<" Value at 20 index  " << number[20]<<endl;

//intialising an array
int second[3] = {3,7,11};
//  int n = 13;
 printArray(second,3);
// cout<<"Value at 2 index is " <<second[2]<<endl;
int third[15] ={2,7};
// int n = 15;
 printArray(third,15);
// int n = 15;
// cout<<"Printing the array "<<endl;
// for (int i = 0; i < n; i++)
// {
//     cout<< third[i] <<" " ;
// }
int fourth[10] ={1};
//  int n = 10;
 printArray(fourth,10);
 int fourthsize = sizeof(fourth)/sizeof(int);
 cout<<"Size of fourth is " <<fourthsize <<endl;

// cout<<"Printing the array "<<endl;
// for (int i = 0; i < n; i++)
// {
//     cout<< fourth[i] <<" " ;
// }
char ch[5] ={'a' , 'u' ,'c' ,'r' , 'p'};
cout<<  ch[3] <<endl;
cout<<" printing the array "<<endl;
for (int i = 0; i <5; i++)
{
    cout<<"ch[i]" <<" " ;
}
cout<<"Printing done" <<endl;
float firstFloat[5];
double firstDoble[10];
bool firstBool[10];


cout<< endl<<"Everything is fine "  <<endl;
return 0;
}