#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Anukalp"] = 98;
    marksMap["Qudusiya"] = 23;
    marksMap["kaddu"] = 2 ;
     map<string, int> :: iterator iter;
     for (iter = marksMap.begin( ); iter!= marksMap.end(); iter++)
     {
        cout<<(*iter).first << " " << (*iter).second << "\n";
     }
     


    return 0;
}

