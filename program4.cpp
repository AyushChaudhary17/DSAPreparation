#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum of n is "<<sum;
    return 0;
}