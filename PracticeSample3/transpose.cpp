#include <iostream>
using namespace std;

void findTranspose(int arr[][3], int rows, int cols, int transpose[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    
}

void printArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
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

    printArray(arr, rows, cols);
    cout << "STart Transposing " << endl;

    int transpose[3][3];
    findTranspose(arr, rows, cols, transpose);
    cout << "Print array again " << endl;
     printArray(transpose, rows, cols);
    return 0;
}