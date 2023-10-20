#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number:\n";
            isPrime=0;
            break;
        }    
    }
    if(isPrime==1){
        cout<<n<<" is a prime number:\n";
    }
    return 0;
}