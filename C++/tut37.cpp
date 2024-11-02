#include<iostream>

using namespace std;


class Employee {

    private:
  
    

    public:
      int id ;
    float sallery ;
    Employee(int inpId){
        id = inpId ;
        sallery = 34;

     
    }

    Employee(){} 
};


class Programmer : public Employee {
    
    public:
    Programmer(int inpId)
    {
    id = inpId ;    

    }
    int LanguageCode = 9 ;
    void getData(){

        cout << id <<endl;
    }


};

int main()
{
    Employee Anukalp (1) , Qudusiya (2) ;

    cout<<Anukalp.sallery<<endl;
    cout<<Qudusiya.sallery<<endl;

    Programmer skillF(10);
    cout << skillF.LanguageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();


    return 0;
}
