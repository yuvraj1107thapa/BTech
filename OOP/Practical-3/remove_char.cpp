#include <bits/stdc++.h>
using namespace std;
 
string removeChars(string s1, string s2 ) {
    int arr[26] = { 0 }; 
    int curr = 0;
    for (int i = 0; i < s1.size(); i++) { 
        arr[s2[i] - 'a'] = -1;
    }
    s1.clear();
    for (int i = 0; i < s2.size(); i++) {
        if (arr[s1[i] - 'a'] != -1) { 
            s1[curr] = s1[i];       
            curr++;       
        }
    }
    return s1;
}

int main() {
    char string1[] = "imyuvrajthapa";
    char string2[] = "im";
    cout << removeChars(string1, string2) << endl;
    return 0;
}