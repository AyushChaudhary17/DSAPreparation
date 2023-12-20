#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int ans=0;
    while(n!=0){
        int bit=(n&1);
        if(bit==1){
            bit=0;
        }else{
            bit=1;
        }
        ans=bit*10+ans;
        n=n>>1;
    }
    cout<<0<<ans<<endl;
    return 0;
}