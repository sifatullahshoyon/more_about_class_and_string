#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   
    while (n--)
    {
        /* code */
        string s, t;
        cin >> s >> t;

        int n1 = s.size();
        int n2 = t.size();
        int mn = min(n1, n2);

        string result;

        // Step 1: common part (S[i], T[i])
        for(int i=0; i<mn; i++){
            result += s[i];
            result += t[i];
        }

        // Step 2: add remaining part of S (if exists)
        for(int i=mn; i<n1; i++){
            result += s[i];
        }

        // Step 3: add remaining part of T (if exists)
        for(int i=mn; i<n2; i++){
            result += t[i];
        }

        cout << result << endl;
    }
    return 0;
}