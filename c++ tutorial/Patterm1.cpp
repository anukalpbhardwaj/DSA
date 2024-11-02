// #include<iostream>
// using namespace std;
// int main() {
// int n ;
// cout<<"Enter the number " <<endl;
// cin>>n;

// int i = 1;
// while(i<=n){

//     int j = 1;
//     while(j<=n){
//         cout<< " * " ;
//         j = j+1;
//     }
//     cout<< endl;
//     i = i +1;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main() {
int n ;
cout<<"Enter the value " <<endl;
cin>>n;
int i = 1;
while(i<=n){


    int j = 1;
    while(j<=n){

        cout<< " * " ;
        // j= j+1;
        j++;
    }
    cout<<endl;

    // i = i +1;
    i++;
}
return 0;
}