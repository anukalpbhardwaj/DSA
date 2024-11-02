#include<iostream>
using namespace std;


void printSumRows(int arr[][3] , int rows,int cols){

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
     for (int j = 0; j < 3; j++)
     {
        sum = sum + arr[i] [j] ;
     }

     cout<<sum <<endl;
     
    }
    
    
}
int main() {

int arr [3] [3];
 int rows =3;
 int cols = 3;

cout<<"Taking input from user " <<endl;
 for (int rows = 0; rows < 3; rows++)
 {
    for (int cols = 0; cols < 3; cols++)
    {
        cin>> arr[rows] [cols] ;
    }
     
 }

 cout<<"Output from input" <<endl;
 for (int rows = 0; rows < 3; rows++)
 {
    for (int cols = 0; cols < 3; cols++)
    {
        cout<< arr[rows] [cols]  <<" ";
    }
    cout<<endl;
    
 }

printSumRows(arr , rows, cols);
 
return 0;
}