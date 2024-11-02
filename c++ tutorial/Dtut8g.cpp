#include<iostream>
using namespace std;
int main() {
//pow (a,b)

int a, b;
// cout<<"Enter the value of a "<<endl;
// cin>>a;

// cout<<"enter the valuee of b"<<endl;
cin>>a>>b;
int ans = 1;
for (int i = 1 ; i <=b; i++)
{
    ans = ans * a ;
}
cout<<"Answer is a "<<ans<<endl;

return 0;
}