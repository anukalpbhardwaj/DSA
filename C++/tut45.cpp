#include <iostream>

using namespace std;

class Student
{

protected:
    int roll_no;

public:
    void set_number(int a)
    {

        roll_no = a;
    }
    void print_number(void){

        cout<< "Your roll number is : " << roll_no <<endl;
            }
};

class Test : virtual public Student{

protected:
float math, physics;
public:
void set_marks(float m1 , float m2){
    math = m1;
    physics  = m2;
    
}

void print_marks(void){

    cout<<"Your result is here : " <<endl
    << "Math : " << math << endl
    << " Physics : " << physics << endl;
}

};

class Sports : virtual public Student{
protected:
    float score ;

    public:
    void set_score(float sco){
        score = sco;

    }

    void print_score(void){


        cout<<"Your PT score is : " << score << endl;
    }
};
class Results : public Test , public Sports{

    private:
    float total;
    public:
    void display(void){

        total = math + physics + score ;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is " <<total;
    }
};

int main()
{
Results anukalp;
anukalp.set_number(39);
anukalp.set_marks(98,97);
anukalp.set_score(93);
anukalp.display();

    return 0;
}
