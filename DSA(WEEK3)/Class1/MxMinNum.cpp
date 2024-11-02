#include <iostream>
using namespace std;
int main()
{

    int arr[] = {3, 5, 6, 9, 256, 1};

    int size = 6;

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
             mini = arr[i];
        }
    }

    cout<<"Minimum ni is : " <<mini<<endl;

    return 0;
}