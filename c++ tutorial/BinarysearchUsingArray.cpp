#include<iostream>
using namespace std;
bool BinarySearch(int*arr ,int s, int e, int k){
    if(s>e)
    return -1;
    int mid = s+(e-s)/2;

    if (arr[mid]==k)
    {
        return true;
    }
    
    if (arr[mid]<k)
    {
        return BinarySearch(arr, mid+1,e,k);
    }
    else{

        return BinarySearch(arr, s, mid-1, k);
    }
    

}
int main() {
int arr[6] = { 2 , 4, 6, 8,10,12};
int size = 6;
int key = 18;
cout<<"Present or not "<<BinarySearch(arr,0,5,key) <<endl;
return 0;
}