// include standard library "input/output stream"
#include <iostream>
// std = standard library, like a bucket for feature currently available to use from import above i.e. <iostream>
using namespace std;

// "main" function -- int = integer
int main() {
    
    // swap value a with value b
    int a = 1;
    int b = 2;
    // solution
    int temp = a;
    a = b;
    b = temp;
    cout << a;

    // int file_size = 100;
    // double sales = 9.99;
    // cout << file_size << " & " << sales;


    // cout = character out. allows to output one or more characters on the screen.
    // cout << "Hello, World!";

    // return 0 tells the OS that our program can terminate correctly. if any other number is presented, then there is an error.
    return 0; 
};