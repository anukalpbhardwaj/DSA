#include <iostream>
using namespace std;
int getMini(int arr[][3], int rows, int cols)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
   return mini;
}

int main()
{

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for (int rows = 0; rows < 3; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cin >> arr[rows][cols];
        }
    }

    for (int rows = 0; rows < 3; rows++)
    {
        for (int cols = 0; cols < 3; cols++)
        {
            cout << arr[rows][cols];
        }
        cout << endl;
    }
    cout << getMini(arr, rows, cols);
    return 0;
}