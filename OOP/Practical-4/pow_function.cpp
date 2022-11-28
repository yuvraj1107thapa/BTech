#include<iostream>
using namespace std;

double power(double m, int n=2) {
    double result=1.0;
    cout<<"\n Number = "<<m<<"\n Power = "<<n;
    for(int i=0; i<n; i++) {
        result=result*m;
    }
    return result;
}

int main() {
    double no,ans;
    int pow;
    char wish;
    cout<<"\n Enter A Number: ";
    cin>>no;
    cout<<"\n You Wish To Enetr Power y/n = ";
    cin>>wish;
    if(wish=='y') {
        cout<<"\n Enter A Power Please: ";
        cin>>pow;
        ans=power(no,pow);
        cout<<"\n Ans = "<<ans;
    }
    else {
    ans=power(no);
    cout<<"\n Ans = "<<ans;
    }
}