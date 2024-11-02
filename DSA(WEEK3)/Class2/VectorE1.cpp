#include<iostream>
#include<vector>
using namespace std;


int main() {

vector<int>arr; 

 int ans = (sizeof (arr)/ sizeof (int)) ;
    cout<<ans;

      cout<<endl;
int ans1 = (sizeof (arr)/ sizeof (char)) ;
cout<<ans1;

cout<<endl;
int ans2 = (sizeof (arr)/ sizeof (bool)) ;
cout<<ans2;

cout<<endl;

cout<<arr.size()<<endl;
cout<<arr.capacity() <<endl;

//insert

arr.push_back(5);

arr.push_back(6);

for (int i = 0; i < arr.size(); i++)
{
  cout<<arr[i] <<" ";
}
cout<<endl;

//delete

arr.pop_back();
for (int i = 0; i < arr.size(); i++)
{
  cout<<arr[i] <<" ";
}

cout<<endl;

//initialisation


vector<int>brr(10,-1);

cout<<"size of brr " <<brr.size() <<endl;
cout<<"capacity of brr " <<brr.capacity() <<endl;

for (int i = 0; i < brr.size(); i++)
{
  cout<<brr[i]<<" ";
}

cout<<endl;

vector<int>crr{10,20,30,40};

cout<<"size of crr " <<crr.size() <<endl; 
cout<<"capacity of crr " <<crr.capacity() <<endl; 

for (int i = 0; i < crr.size(); i++)
{
  cout<<crr[i] <<" ";
}

return 0;
}
