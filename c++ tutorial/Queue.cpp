#include<iostream>
#include<queue>
using namespace std;
int main() {

    deque<int> d;
    d.push_front(23);
    d.push_back(26);
    cout<< d.front() <<endl;
    cout<< d.back()<<endl;
    d.pop_front();
    cout<< d.front() <<endl;
    cout<< d.back()<<endl;
    d.pop_back();
    if(d.empty()){
        cout<<"khali hai bhai " <<endl;
    }
    else{
        cout<< " Bhara hai bhai"<<endl;
    }

// queue<int> q;

// q.push(12);
// cout<< "Front of queue is " <<q.front() <<endl;
// q.push(14);
// cout<< "Front of queue is " <<q.front() <<endl;
// q.push(22);
// cout<< "Front of queue is " <<q.front() <<endl;
// q.push(34);
// cout<< "Front of queue is " <<q.front() <<endl;

// cout<<"Size of queue is: " << q.size() <<endl;

// q.pop();
// q.pop();
// cout<<"Size of queue is: " << q.size() <<endl;
// if (q.empty())
// {
//     cout<<"Queue is empty " <<endl;
// }
// else{
//     cout<<"Queue bhara hua hai bhai " <<endl;
// }
return 0;
}