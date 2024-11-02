#include<iostream>
using namespace std;

int main(){


int n ;
cout<<"Enter the value " <<endl;
cin>>n;
int row = 1;


  //space

  int col = n - row +1;
    while(col<=n){

        cout<< "*" ;
        col++;
    }


    //star
    while(row<=n){

int space = row - 1 ;
while(space){

    cout<< " " ;
    space++;
}
    


  

    cout<<endl;
    row++;
}
    return 0 ;
}