#include <iostream>
using namespace std;
int main()
{

    char ch = '1';
    int num = 1;
    cout << endl;
    switch (ch)
    {

    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (num)
        {

        case 1:
            cout << " value of num is " << num << endl;
            break;
        }
        break;

    default:
        cout << "It is deafault" << endl;
    }
    return 0;
}