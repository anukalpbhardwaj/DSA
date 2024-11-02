#include <iostream>
using namespace std;

void printSumColWise(int arr[][3] ,int row ,int col){
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        
        cout<<sum  <<endl;
    }

    
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

cout<<"print the matrix column wise " << endl;

for (int row = 0; row < 3; row++)
{
    for (int col = 0; col < 3; col++)
    {
        cout<< arr[col][row] <<" ";
    }
    cout<<endl;
    
}

printSumColWise(arr,row,col);

    return 0;
}