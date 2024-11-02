#include<iostream>
using namespace std;
void Print(int arr[],int n){

    cout<<"Size of an array is "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] <<" " ;
    }
    cout<<endl;
    
}
bool LinearSearch(int arr[], int size, int k){
    Print(arr,size);
    if (size==0)
    {
        return 0 ;

    }
    if (arr[0]==k)
    {
        return true;
    }
    else{
        bool remainingPart = LinearSearch(arr+1,size-1,k);
        return remainingPart;
    }
    
    
}

int main() {
int arr[5] = {3 , 5 ,7, 9, 11};
int size =5;
int key = 9;
// int key;
// cin>>key;
bool ans = LinearSearch(arr, size, key);

if (ans)
{
    
    cout<<"Ans is present " <<endl;
}
else{
    cout<<"Ans is absent" <<endl;
}

return 0;
}