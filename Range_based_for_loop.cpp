#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) // এই লুপ index নিয়ে কাজ করে ।
    {
        cout << s[i] << endl;
    }
    //  short version of for loop
    for(char c : s) // এই লুপ index নিয়ে কাজ করে না। শুধু char নিয়ে কাজ করে।
    {
        cout << c << endl;
    }

    return 0;
}