#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int bit1=0;
    while(n>0){
        if(n&1){
            bit1++;
        }
        n=n>>1;
    }
    cout<<bit1<<endl;
    return 0;
}