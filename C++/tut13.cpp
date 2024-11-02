#include<iostream>
using namespace std;

int main()
{
    int marks[] = {23,45,46,67};
    cout<<"These are marks" <<endl;

    /*cout<< marks[0]<<endl;
    cout<< marks[1]<<endl;
    cout<< marks[2]<<endl;
    cout<< marks[3]<< endl;*/

    cout<<"These are mathmarks" <<endl;
        int mathmarks[4];

    mathmarks[0] =456;
    mathmarks[1]=300;
    mathmarks[2]=399;
    mathmarks[3]=309;

    /*cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;*/
    //int i =0 ;
    //for (i = 0; i < 4 ; i++)
    ////{
       // cout<< "The value of  marks" << i << " is " << marks[i] << endl;
    //}
    
    // while (i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    
    // do {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }while(i<4);
    //pointers and array

    int*p = mathmarks;
    // cout<<" The value of *p "<<*p<<endl;
    // cout<<" The value of *(p+1) "<<*(p+1)<<endl;
    // cout<<" The value of *(p+2) "<<*(p+2)<<endl;
    // cout<<" The value of *(p+3) "<<*(p+3)<<endl;
    cout<<*++p <<endl;
    cout<<*p <<endl;
    

    return 0;
}

