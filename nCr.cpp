#include<iostream>
using namespace std;
int Fact(int n);
int nCR(int ,int);
int nCR(int n, int r){
     return Fact(n)/(Fact(r)*Fact(n-r));
    
}
int Fact(int n){
    int i=1,fact=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter the value of n and r here:"<<endl;
    cin>>n>>r;
    int nCr=nCR(n,r);
    cout<<"nCr is "<<nCr;
    return 0;
}