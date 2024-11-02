#include<iostream>
using namespace std;
int main() {
int n ;
cout<<"Enter the value " <<endl;
cin>>n;

/*int row =1;
while(row<=n){


    int col = 1;
    while(col<=row){
        int space = 0;
        space = row - 1;
        while(space){
            cout<< space;
            space=  space-1;
        }
        
while(col<=n){
    cout<<" * " << " ";
    col++;
}

    }
    cout<<endl;
    row++;
}*/
    int i = 1;
    while (i<=n)
    {
    // space
    
        // int space = i - 1;
        // while (space)
        // {
        //     cout<<" ";
        //     space = space - 1;
        // }
        int j = 1;
        while (j <= i )
        {
            cout<<" * ";
            j++;
        }
        cout<<endl;
        i++; 
    }
return 0;
}