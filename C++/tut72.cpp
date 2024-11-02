#include<iostream>
#include<list>

using namespace std;
void display(list<int> &lst){

list<int> :: iterator it ;
for ( it= lst.begin(); it != lst.end(); it++)
{
    cout<< *it << " ";
}

}



int main()
{
    

    list<int>list1;
    //list<int>list1(7);
     list1.push_back(3);
     list1.push_back(6);
     list1.push_back(7);
     list1.push_back(9);
     list1.push_back(12);

    //  list<int> :: iterator iter;
    //  iter = list1.begin();
    //  cout<< *iter << " ";
    //  iter++;
    //  cout<< *iter << " " ;
    //  iter++;
    //  cout<< *iter << " " ;
    //  iter ++;
    //  cout<< *iter << " " ;
    display(list1);

    list<int>list2(3);
    list <int> ::  iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter ++ ;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);


    return 0;
}
