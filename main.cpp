// include standard library "input/output stream"
#include <iostream>
// std = standard library, like a bucket for feature currently available to use from import above i.e. <iostream>
using namespace std;

// "main" function -- int = integer
int main() {
    // cout = character out. allows to output one or more characters on the screen.
    cout << "Hello, World!";
    // return 0 tells the OS that our program can terminate correctly. if any other number is presented, then there is an error.
    return 0; 
};


int fullName() {
    string first_name, last_name;
    cout<<"Enter your first name: "; 
    cin>>first_name;

    cout<<"Enter your last name: "; 
    cin>>last_name;

    cout<<"Your full name is: "<<first_name<<" "<<last_name<<" ";

    return 0;
};