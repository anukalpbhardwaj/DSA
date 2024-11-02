#include<iostream>
using namespace std;
int main() {
int n ;
cout<<" Enter the value "<< endl;
cin>>n;
int row= 1;

 char value = row;
 char value = 'A';
 

while(row<=n) {

    int col = 1;
    
   
    while(col<=row){
       
        cout<< value<<" " ;
        value++;
        col++;
    }
    cout<<endl;
    row++;
}
return 0;
}