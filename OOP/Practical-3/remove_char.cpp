#include <bits/stdc++.h>
using namespace std;
 
string removeChars(string s1, string s2) {
    int arr[26] = { 0 }; 
    for (int i = 0; i < s2.size(); i++) { 
        arr[s2[i] - 'a'] = -1;
    }
    string ans = "";
    for (int i = 0; i < s1.size(); i++) {
        if (arr[s1[i] - 'a'] != -1) { 
            ans += s1[i];      
        }
    }
    return ans;
}

int main() {
    string s1 = "imyuvraj";
    string s2 = "im";
    cout << removeChars(s1, s2) << endl;
    return 0;
}