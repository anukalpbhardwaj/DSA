#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the value " << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {

        int col = 1;

        while (col <= n)
        {
            char ch = row + col + 'A'-2;
            cout<< ch;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}