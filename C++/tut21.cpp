#include<iostream>

using namespace std;

class employee
{
    private :
    int a,b,c ;
    public :
    int d , e ;

    void setData(int a, int b ,int c); //declareation
    void getData() {

        cout<<   "The value of a is "<< a <<endl;   
        cout<<   "The value of b is "<< b <<endl;   
        cout<<   "The value of c is "<< c <<endl;   
        cout<<   "The value of d is "<< d <<endl;   
        cout<<   "The value of e is "<< e <<endl;   
    
    }
    };

    void employee :: setData(int a1, int b1 , int c1)
    {

        a = a1;
        b = b1;
        c = c1;
    }


int main()
{
    employee anukalp;
    anukalp.d = 11;
    anukalp.e = 5;
    //anukalp.a = 34; //This will through error because a is private
    anukalp.setData(1,2,4);
    anukalp.getData();


    return 0;
}
