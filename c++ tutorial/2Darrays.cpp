#include <iostream>
using namespace std;
bool isPresent(int arr[][], int target, int i, int j)

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j]==target)
            {
                return 1;
            }
            
        }
        return 0;
}

int main(){


    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }

         }
        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j  = 0; j<4; j++)
        //     {
        //        cout<<arr[i][j] <<" ";
        //     }
        //     cout<<endl;
        // }
        // for (int i = 0; i < 4; i++)
        // {
        //     for (int j  = 0; j<3; j++)
        //     {
        //        cin>>arr[j] [i];
        //     }

        // }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Enter the element you want to search for " << endl;
        int target;
        cin >> target;
        if(isPresent(arr, target,3,4))
        {

            cout << "Element found " << endl;
        }
        else
        {
            cout << "Not found " << endl;
        }
        return 0;
    }