#include<iostream>
using namespace std;
int main() {

int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        void printSum(int arr[][3],int i , int j){

            cout<<"Printing sum ->" <<endl;
            for (int i = 0; i < 3; i++)
            int sum = 0;
    {
        for (int j = 0; j < 4; j++)
        {
           sum +=arr[i][j];
        }
        cout<<"sum " <<" ";
    }
        }
        printSum(arr, 3, 4);
return 0;
}
