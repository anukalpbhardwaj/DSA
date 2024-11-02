#include<iostream>
#include <vector>
using namespace std ;

int main(){

    int arr[] = { 2, 3, 4 ,5 , 6}; 

    int sizea = 5 ;

    int brr[] = {7,8,9,1};

    int sizeb = 4;

    vector<int> ans;

    //arr wale ka union me daleneg

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    
//brr wlr lko dalo

for (int i = 0; i < sizeb; i++)
{
    
    ans.push_back(brr[i]);
}


//ab ans ko union bano
//printing ans 

cout<<"Printing an answer "  <<endl;

for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i] <<" " ;
}



    return 0;
}