#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "Hello";
    // todo : 1
    // constructor
    string s_obj("Hello");
    // cout << s_obj << endl;

    // todo : 2
    string s_obj_2("Hello World" , 4); // resize() এর মতো কাজ করে অনেকটা।
    // cout << s_obj_2 << endl;

    // todo : 3
    string s = "Hello World";
    string s_obj_3(s,4);
    // cout << s_obj_3 << endl;

    // todo : 4
    string s_obj_4(5,'Z');
    cout << s_obj_4 << endl;

    return 0;
}