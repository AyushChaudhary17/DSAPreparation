#include<iostream>
using namespace std;
int AP(int );
int AP(int n){
    return 3*n+7;
}
int main(){
    int n;
    cout<<"Enter the value of n here:"<<endl;
    cin>>n;
    cout<<n<<"th term of the AP is "<<AP(n);
    return 0;
}