#include<iostream>
#include<string.h>
using namespace std;

class String {
private:
    int length;
    char *str;
    
public:
    String(){
      length=0;
      str= new char[length+1];
    }
    
    String(char *s){
      length=strlen(s);
      str=new char[length+1];
      strcpy(str,s);
    }
    
    friend String operator +(String &s1, String &s2);
    friend void show(String &s);
};

void show(String &s){
  cout<<s.str<<endl;
}

String operator +(String &s1, String &s2){
  String temp;
  temp.length=s1.length+s2.length;
  delete temp.str;
  temp.str=new char[temp.length+1];
  strcpy(temp.str,s1.str);
  strcat(temp.str,s2.str);
  return temp;
}

int main() {
  char c1[]="Yuvraj ";
  char c2[]="Thapa";
  String s1(c1), s2(c2);
  String s3;
  s3=s1+s2;
  cout<<"s3 is:";
  show(s3);
  return 0;
}