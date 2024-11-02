#include<iostream>
using namespace std;

class Employee{
   int Id ;
   int sallery;

   public:
   void setId(void) {
    sallery = 122;
   cout<< "Enter the Id of the Employee" << endl;
    cin>> Id;
}
void getId(void){

    cout<<"The Id of this Employee is " << Id << endl;
}

};
int main()
{
    Employee fb[4];
for (int i = 0; i < 4; i++)
{
   fb[i].setId();
   fb[i].getId(); 
}



    return 0;
}
