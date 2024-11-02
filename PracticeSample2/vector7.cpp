#include<iostream>
#include<vector>
using namespace std;
int main() {

    //pair sum
vector<int> arr{10,20,30,40,50,60,70} ;
int sum = 80;
//print all pairs

//outer loop will traverse each element
  for (int i = 0; i < arr.size(); i++)
{

    cout<<"We are at element : " << arr[i] <<endl;
    int element = arr[i];
    for (int j = i +1; j < arr.size(); j++)
    {

       if (element + arr[j] == sum)
       {
         cout<<"pair  "<<element <<"with  " <<arr[j] <<endl;
       }
       
        /* code */
        // cout<< "(" <<element <<" , " <<arr[j] << " ) " <<endl;
    }
    
}

return 0;
}