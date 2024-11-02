#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the amount " << endl;
    cin >> n;
    int Rs100, Rs50,Rs20,Rs10,Rs1;
    switch (1)
    {
    case 1:
     Rs100 = n /100;
     n  = n % 100;
       
        cout << "No of Hundred rupees notes are : " << Rs100 << endl;
        
        // break;
    case 2:
     Rs50 = n /50;
     n  = n % 50;
       
        cout << "No of Fifty rupees notes are : " << Rs50<< endl;
        
        // break;
    case 3:
     Rs20 = n /20;
     n  = n % 20;
       
        cout << "No of Twenty rupees notes are : " << Rs20 << endl;
        
        // break;
    case 4:
     Rs10 = n /10;
     n  = n % 10;
       
        cout << "No of Ten rupees notes are : " << Rs10<< endl;
        
        // break;
    case 5:
     Rs1 = n /1;
     n  = n % 1;
       
        cout << "No of One rupees notes are : " << Rs1<< endl;
        
        // break;
    
    

    default:
        cout << "no amounts are available" << endl;
    }

    return 0;
}