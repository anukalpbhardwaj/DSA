    #include<iostream>
    using namespace std;
    int main() {
    int num = 10;
    // cout<<num <<endl;
    // cout<<"Address of num " <<&num <<endl;

    int*ptr = &num;
    cout<< "value is " <<*ptr;
    return 0;
    }