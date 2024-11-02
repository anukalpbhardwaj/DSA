#include <iostream>

using namespace std;

class Hero
{

private:
int health;
public:
char * name;
    char level;
    static int timeToComplete;

    
    Hero()
    {
        cout << "Construtor called :- ";
    }
    Hero(int health)
    {
        cout << " this -> " << this << endl;
        //  this->health = health;
    }
    Hero(int health, char level)
    {
        this->level = level;
        health = health;
    }
    // void print()
    // {
    //     cout << level << endl;
    // }
    int getHealth()
    {
          return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {

         health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};
int Hero :: timeToComplete = 5;

int main()
{
    cout<< Hero :: timeToComplete  <<endl;
    
    Hero a;
   cout <<endl <<  a.timeToComplete <<endl <<endl;

    // Hero ramesh(70);
    // cout<< "Address of ramesh " << &ramesh <<endl;
    // ramesh.getHealth();

    // Hero* h = new Hero;

    // Hero anukalp;
    // anukalp.level='A';
    // anukalp.health = 70;
    // cout<<"level is : " <<anukalp.level<<endl;
    // cout<<"health is :" <<anukalp.health<<endl;
    // Hero* b = new Hero;
    // b->setHealth(70);
    // cout<<"level is : " <<b->level<<endl;
    // cout<<"health is :" <<b->health<<endl;

    // cout<<"level is : " <<(*b).level<<endl;
    // cout<<"health is :" <<(*b).health<<endl;
    return 0;
}