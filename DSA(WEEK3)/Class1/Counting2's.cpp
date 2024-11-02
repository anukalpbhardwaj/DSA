#include<iostream>
using namespace std;
int main() {

int arr[]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1};

int size = 30;

int count = 0;

for (int i = 0; i < size; i++)
{
    if (arr[i]==2)
    {
        count++;
    }
    
    
}

cout<<"Numbers of two's : "<<count<<endl;

return 0;
}