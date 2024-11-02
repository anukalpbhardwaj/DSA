#include <iostream>
using namespace std;

bool findKey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)

                return true;
        }

      
    }
      return false;
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout << "take input from user " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "print the matrix column wise " << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[col][row] << " ";
        }
        cout << endl;
    }
    int key = 65;
    findKey(arr, row, col, key);

    cout<<findKey <<endl;
     return 0;
}