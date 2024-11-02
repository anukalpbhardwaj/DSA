#include <iostream>

using namespace std;

class BaseClass
{ 
    public:
    int var_base;
    void Display(){
        cout<<"Displaying Base class variable var_base " <<var_base << endl;
    }
};
class DerivedClass : public BaseClass
{ 
    public:
int var_derived;
    void Display(){
        cout<<"Displaying Base class variable var_base " <<var_base << endl;
        cout<<"Displaying Base class variable var_derived " <<var_derived<< endl;
    }

};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer ->var_base = 34;
    base_class_pointer -> Display();

    DerivedClass *derived_class_pointer ;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_derived = 98;
derived_class_pointer ->Display();


    return 0;
}
