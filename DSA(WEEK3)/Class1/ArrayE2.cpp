#include<iostream>
using namespace std;
int main() {

    int arr[10] ={ };

cout<<"Enter the input value " <<endl;


for (int i = 0; i < 10; i++)
{
    // int n;
    // cin>>n;
    // arr[i] = n;
    cin>>arr[i];

}

cout<<"Printing the values in array" <<endl;

for (int i = 0; i < 10; i++)
{
    cout<<arr[i] <<" ";
}




return 0;
}