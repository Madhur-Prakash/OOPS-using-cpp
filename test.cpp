#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <algorithm>
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
    

    // hello();

    // //pointers
    // int c = 10;
    // int* ptr = &c; // ptr is a pointer to an integer, and it holds the address of c
    // cout<< "Value of c: " << c << endl; // Output: 10
    // cout<< "Address of c: " << &c << endl; // Output: (


    // // triangle pattern
    // int rows = 5;
    // for (int i = 1; i <= rows; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // //cstring in c++
    // char str1[] = "Hello";
    // cout << "String: " << str1 << endl;
    // cout << "Length of string: " << strlen(str1) << endl;

    // char str2[] = "World";
    // strcpy(str2, "hello world");
    // cout << "Copied String: " << str2 << endl;

    // return 0;

// array
// int arr[5] = {1, 2, 3, 4, 5};
//     cout << "Array elements: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

// vector -> using vector in c++
    // queue -> using queue in c++
    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // cout << "Front element: " << q.front() << endl;

    // // stack
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // cout << "Top element: " << s.top() << endl;

    // sizeof(arr) prints the total size of the array in bytes, while sizeof(arr[0]) prints the size of a single element in the array. By dividing the total size of the array by the size of a single element, we can determine the number of elements in the array.
// int arr[5] = {1, 2, 3, 4, 5};
vector<int> arr2;
arr2.push_back(1);
arr2.push_back(2);
arr2.push_back(30);
arr2.push_back(10);
int arr[] = {5, 2, 8, 1, 3};

    cout<< "sorted array: " << endl;
    cout << sizeof(arr[0]) << endl;
    sort(arr2.begin(), arr2.end());
    reverse(arr2.begin(), arr2.end());
    cout<< "Sorted array: ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // selection sort
    for (int i = 0; i < 5; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    cout << "Selection sorted array: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }

    // insertion sort
    for (int i = 1; i < 5; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << endl << "Insertion sorted array: ";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }


    return 0;
}