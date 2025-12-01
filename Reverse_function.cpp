#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // sort(starting , ending);
    // reverse(starting , ending);

    reverse(arr,arr+n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl; 
    //! Reverse String
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    cout << s;


    return 0;
}