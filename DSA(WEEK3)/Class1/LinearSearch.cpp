#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)

            return true;
    }

    return false;
}

int main()
{

    int arr[] = {1, 3, 5, 7, 8, 10};

    int size = 6;

    cout << "Enter the key to find " << endl;

    int key;
    cin >> key;

    if (find(arr, size, key))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not find";
    }

    return 0;
}