#include<iostream>
#include<fstream>
 using namespace std;

  int main()
  {
    ofstream out;
    out.open("sample60b.txt");
    out<<"This is me \n";
    out<<"This is me  alse ";
    out.close();
    return 0;
  }
  