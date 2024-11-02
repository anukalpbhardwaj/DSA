#include <iostream>
using namespace std;
char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {

            return 0;
        }
        else
        {

            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s < e)
    {

        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    // name[2] = '\0';
    cout << "your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << "Length : " << len << endl;
    reverse(name, len);
    cout << "your name is ";
    cout << name << endl;
    cout << "Check palindrome or not ->" << checkPalindrome(name, len) << endl;
    // cout<<"Character is " <<toLowerCase

    return 0;
}