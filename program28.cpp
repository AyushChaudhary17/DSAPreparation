#include<iostream>
using namespace std;
int POW(int ,int);
int POW(int x,int i){
    int j=1;
    int pow=1;
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
    int i=0;
    bool ans=false;
    while(i<=n){
        if(POW(2,i)==n){
            ans=true;
            break;
        }
        i++;
    }
    cout<<ans;
    return 0;
}