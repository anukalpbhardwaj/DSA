#include<iostream>
#include<vector>
using namespace std;
int main() {
vector<int> v ;

cout<<"capacity -> " <<v.capacity()<<endl;

v.push_back(1);
cout<<"size-> " <<v.capacity()<<endl;
v.push_back(2);
cout<<"size-> " <<v.capacity()<<endl;
return 0;
}