#include <iostream>
#include <string.h>
using namespace std;

class String {
    char str[20];
public:
    void put();
    friend void print(String &obj);
    friend String operator +(String &obj, String X);
    void operator ++(int) {
        strcat(str, "!");
    }
};

String operator +(String &obj, String X){
    String temp;
    strcpy(temp.str, obj.str);
    strcat(temp.str, X.str);
    return temp;
}

void String::put() {
    cout << "Enter a string: ";
    cin >> str;
}

void print(String &obj) {
    cout << "String is " << obj.str << endl;
}

int main() {
    String s1, s2, s3;
    s1.put();
    s2.put();
    s3 = s1 + s2;
    print(s3);
    s3++;
    print(s3);
    return 0;
}