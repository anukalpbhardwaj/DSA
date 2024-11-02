#include<iostream>
using namespace std;

template<class T1 = int , class T2 = float>
 class Anukalp {


    public:
    T1 a;
    T2 b;
    Anukalp(T1 x , T2 y){


        a = x;
        b = y;

    }
    void display(){

        cout<<"The value of a is " << a <<endl;
        cout<<"The value of b is " << b <<endl;
    }
 };


int main()
{
    Anukalp<> h(4,6.4);
    h.display();
    Anukalp<float ,char >g(8.5 , 'v');
g.display();
    return 0;
}
