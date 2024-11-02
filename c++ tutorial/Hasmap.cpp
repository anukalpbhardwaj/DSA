#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;


int main() {
//creation 
unordered_map<string, int> m;

//insertion
//1
pair<string, int > p = make_pair(" babbar " , 3);
m.insert(p);

//2
pair<string, int> pair2("love" , 2);
m.insert(pair2);
//3

m["mera"] = 4;

//search

cout<<m["mera"] <<endl;

return 0;
}