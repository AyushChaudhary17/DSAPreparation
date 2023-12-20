#include<iostream>
using namespace std;
int power(int,int);
int power(int a,int n){
    int i=1,pow=1;
    while(i<=n){
        pow=pow*a;
        i++;
    }
    return pow;
}
int main(){
    int a,n;
    cout<<"Enter the value of a and n here:"<<endl;
    cin>>a>>n;
    a=power(a,n);
    cout<<"Power of a to  n is "<<a<<endl;
    return 0;
}