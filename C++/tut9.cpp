#include<iostream>

using namespace std;

int main()
{
//cout<<"This is tutorial 9";
int age ;
/*cout<<"Tell me your age" << endl ;
cin>> age ;
if (age<18)
{
    cout<<"You can not come to my party" << endl;
}
else if (age==18)
{
cout<<"you can come to my party with speacial pass ,which i permit last  night" ;

}
else {

     cout<< "you can come to my party " ;
}
*/
cout<<"Enter your age" <<endl ;
cin>> age;
switch (age)
{
    case 18:
    cout<<"you are 18"<<endl;
    break;

    case 22:
    cout<<"you are 22"<<endl;
    break;
    case 2:
    cout<<"you are 2" <<endl;
    break;

default:
cout<<"no special cases"<< endl;
    break;
}

    return 0;
}
