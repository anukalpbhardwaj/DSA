#include<iostream>
using namespace std;
int main() {
int n ;
cout<<" Enter the value "<< endl;
cin>>n;
int row= 1;
 char value = 'A';

while(row<=n) {

    int col = 1;
   
    while(col<=n){

        cout<< value<<" " ;
        value++;
        col++;
    }
    cout<<endl;
    row++;
}
return 0;
}