#include<iostream>
#include<stack>
using namespace std;
class Stack{

    //properties 
public:

int *arr;
int top;
int size;


//behaviour
Stack(int size){
this ->size = size;
arr = new  int[size];
top = -1;
}

void push( int element) {
    if (size - top >1)
    {
        top++;
        arr[top]=element;

    }
    else{
        cout<< "Stack Overflow " <<endl;
    }
    
}
void pop(){

    if (top>=0)
    {
        
        top--;
    }
    else{
        cout<<"Stack underflow " <<endl;
    }
    
}
int peak(){
    if (top>=0)
    {
        return arr[top];
    }
    else{
        cout<<" Stack is empty " <<endl;
        return -1;
    }
    
}

bool isEmpty(){

    if (top==-1)
    {
        
        return true;
    }
    else{
        return false;
    }
    
}

};

int main() {
 
 Stack st(5);
 
st.push(12);
st.push(15);
st.push(23);
st.push(18);
st.push(21);

cout<< st.peak() <<endl;
 
 st.pop();

 cout<< st.peak() <<endl;
 
 st.pop();

 cout<< st.peak() <<endl;
 
 
 
 
 
 
 
 //creation of stack
//  stack<int> s;

//  // insertion of stack

//  s.push(2);
//  s.push(3);
//  s.push(9);

// //delketion

// s.pop();
// // s.pop();

// cout<< "Printing top element " << s.top() <<endl;

// if(s.empty()){
// cout<<"Stack is empty " <<s.top()<<endl;
// }
// else{
// cout<<"Stack is not empty "<< s.top()<<endl;
// }

// cout<<"size of stack is " <<s.size() <<endl;

return 0;
}