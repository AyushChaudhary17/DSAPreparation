#include<iostream>
using namespace std;
int POW(int,int);
int POW(int x,int i){
    int pow=1;
    int j=1;
    while(j<=i){
        pow=pow*x;
        j=j+1;
    }
    return pow;
}
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int rev=0;
    int temp=n;
    int count=0;
    while(temp!=0){
        count=count+1;
        temp=temp/10;
    }
    int i=count-1;
    temp=n;
    while(n!=0){
        int digit=n%10;
        rev=rev+digit*POW(10,i);
        n=n/10;
        i--;
    }
    n=rev;
    cout<<"The reverse of the "<<temp<<" is "<<n;
    return 0;
}