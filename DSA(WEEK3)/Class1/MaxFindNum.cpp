#include<iostream>
using namespace std;
int main() {

int arr[]= {2,45,9,17,19,10};
int size = 6;

 int maxi = INT_MIN;

 for (int i = 0; i < size; i++)
 {
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    
 }

 cout<< " maximum number is  : " <<maxi <<endl;
 

return 0;
}