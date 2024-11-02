#include<iostream>
using namespace std;
int main() {

int arr[]={1,3,4,5,6,7,8,9};

int size =8;
int key = 6;

bool flag =0;

for (int i = 0; i < size; i++)
{
    if (arr[i]==key)
{
       flag =1;
}
}
if(flag)
cout<<"Present" <<endl;

else
cout<<"Absent" <<endl;



return 0;
}   