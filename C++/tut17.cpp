#include<iostream>
using namespace std;

inline int product (int a, int b){
 //static int c = 0 ;
 //c = c+1;

    return a*b ;
}

    float moneyreceived(int currentmoney, float factor = 1.04){

       return currentmoney *factor;
    }
int main()
{
    int a , b ;
    int money = 100000;
    //cout<<"Enter the value a and b"<< endl;
    //cin>>a>>b;
    //cout<<"product of  the value a and b "<<product(a,b)<< endl;
    cout<<"if you have " <<money<<" Rs in your bank account, yow will receive "<<moneyreceived(money)<<" Rs after 1 year"<<endl;
    cout<< "For VIP : if you have " <<money<<" Rs in your bank account, yow will receive "<<moneyreceived(money,1.4)<<" Rs after 1 year"<<endl;

    return 0;
}
