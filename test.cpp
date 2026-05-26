#include <iostream>
#include <cstring>
using namespace std;

void hello(){
        cout << "Hello, World!" << endl;
    }

int main() {
    // char c = 'w';
    // cout<< sizeof(c) << endl;
    // int i = 0;
    // int mynum = 10;
    // cout<< sizeof(mynum) << endl;
    // float myfloat = 3.14;
    // cout<< sizeof(myfloat) << endl;

    // if-else
    // if (mynum > 5) {
    //     cout << "mynum is greater than 5" << endl;
    // } 
    
    // else if (mynum == 5) {
    //     cout << "mynum is 5" << endl;
    // }
    // else {
    //     cout << "mynum is not greater than 5" << endl;
    // }

    // //for-loop
    // for ( i= 0; i < 5; i++) {
    //     cout << "i: " << i << endl;
    //     if(i == 2) {
    //         cout << "Breaking out of the loop at i = " << i << endl;
    //         continue; // Skip the rest of the loop body when i is 2
    //     }
    // }

    // //while-loop
    // i = 0;
    // while (i < 5) {
    //     cout<<"in while loop" << endl;
    //     cout << "i: " << i << endl;
    //     i++;
    // }

    // //do-while loop
    // do {
    //     cout<<"in do-while loop" << endl;
    //     cout << "i: " << i << endl;
    //     i++;
    // } while (i < 5);

    // switch (mynum) {
    //     case 10:
    //         cout << "mynum is 10" << endl;
    //         break;
    //     case 20:
    //         cout << "mynum is 20" << endl;
    //         break;
    //     default:
    //         cout << "mynum is neither 10 nor 20" << endl;
    // }

    // function
    

    hello();

    //pointers
    int c = 10;
    int* ptr = &c; // ptr is a pointer to an integer, and it holds the address of c
    cout<< "Value of c: " << c << endl; // Output: 10
    cout<< "Address of c: " << &c << endl; // Output: (


    // triangle pattern
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    //cstring in c++
    char str1[] = "Hello";
    cout << "String: " << str1 << endl;
    cout << "Length of string: " << strlen(str1) << endl;

    char str2[] = "World";
    strcpy(str2, "hello world");
    cout << "Copied String: " << str2 << endl;

    return 0;


}