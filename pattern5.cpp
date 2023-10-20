#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=0;
    int j=1;
    for(int count=1;count<=n;count++){
        if(count==1){
            cout<<i<<" ";
        }else if(count==2){
            cout<<j<<" ";
        }else{
            int next=i+j;
            cout<<next<<" ";
            i=j;
            j=next;
        }
    }
    return 0;
}