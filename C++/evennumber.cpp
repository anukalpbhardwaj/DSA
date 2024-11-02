#include<iostream>
using namespace std;

int main()
{ int n = 0;
    for (int i = 0; i < 20; i++)
    {
       n = i% i ;
       if (n==0)
       {
        cout<< "print even numbers :" << i<<endl;
        
       }
       
        
    }
    
    return 0;
}
