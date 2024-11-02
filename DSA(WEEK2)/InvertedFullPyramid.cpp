#include<iostream>
using namespace std;
int main() {


cout<<"enter a Number as you wish" <<endl;

int n;
cin>>n;

for (int row = 0; row < n;row++)
{
    for (int col = 0; col < row; col++)
    {
        cout<<" ";
    }
    for (int col = 0; col < n-row; col++)
    {
        cout<<"* ";
    }

 
    cout<<endl;
    
}

return 0;
}