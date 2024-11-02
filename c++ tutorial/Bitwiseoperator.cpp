#include <iostream>
using namespace std;
int main()
{ 
    int a = 4;
    int b = 2;
    cout << " a&b " << (a&b) << endl;
    cout << " a | b " << (a | b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a ^ b " << (a ^ b) << endl;

    cout<< (15>>2) <<endl;
    cout<< (15>>1) <<endl;
    cout<< (15<<2) <<endl;
    cout<< (15<<1) <<endl;

    int i = 18;
    cout<<(++i) <<endl;
    cout<< (i++ ) <<endl;
    cout<< (i--) <<endl;
    cout<<(--i)<<endl;

    return 0;
}