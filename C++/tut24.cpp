#include <iostream>
using namespace std;

class Employee
{

private:
    int eId;
   static int count;

public:
    void setData(void) {
        cout<<"Enter the eID"<<endl;
        cin>> eId;
        count++;
    }
    void getData(void){

        cout <<  "The eId of this Employee is : " << eId << " and this is Employee no " << count << endl;

    }
    static void getCount(void){

        cout<< "The value of count is " << count <<endl;
    }

};

int Employee :: count ;

int main()
{
  Employee anukalp, qudusiya,anuqudu ;
//   anukalp.eId;
//   anukalp.count; //can't do this because id and count are private
 anukalp.setData();
 anukalp.getData();
Employee :: getCount();

 qudusiya.setData();
 qudusiya.getData();
Employee :: getCount();

 anuqudu.setData();
 anuqudu.getData();
 Employee :: getCount();
    return 0;
}
