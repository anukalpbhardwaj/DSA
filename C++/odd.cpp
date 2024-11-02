#include<iostream>
using namespace std;

int main()
{ int n = 0 ;
    for (int i = 0; i < 20; i++)
    {
        n = i %2 ;
        if (n==1)
        {
            cout<<" print odd numbers:"<<i<<endl;
        }
        
    }
    
    return 0;
}
