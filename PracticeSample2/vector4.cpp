#include<iostream>
#include<vector>
using namespace std;

int main() {

int arr[] = {1,2,3,4};

int sizea =  4 ;

int brr[] = {5,6,7,8,9};
int sizeb = 5 ;

vector<int> ans;

//pushing 1st array

for (int i = 0; i < sizea; i++)
{
    ans.push_back(arr[i]);
}

//pushing second array

for (int i = 0; i < sizeb; i++)
{
    ans.push_back(brr[i]);
}

// union of two

//printing ans

cout<<"Printing the union is : " <<endl;

for (int i = 0; i < ans.size(); i++)
{
    cout << ans[i] << " " ;
}


return 0;
}