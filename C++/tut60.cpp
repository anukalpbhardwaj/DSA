#include<iostream>
#include<fstream>

using namespace std ;

int main()
{
    string st = "Anukalp bhai";
    string st2;
        // ofstream out("sample61.txt");
        ifstream in("sample60b.txt");
        // out<<st;
        // in>>st2;
        getline(in , st2);
        cout<<st2;
    return 0;
}
