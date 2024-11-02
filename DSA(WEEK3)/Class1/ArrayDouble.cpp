#include<iostream>
using namespace std;
int main() {

int arr[] = { }; 


cout<<"Enter the input " <<endl;

for (int i = 0; i < 5; i++)
{
    cin>>arr[i];
}

cout<<"Enter the output" <<endl;
for (int i = 0; i < 5; i++)
{
    cout<<2*arr[i] <<" ";
}


return 0;
}