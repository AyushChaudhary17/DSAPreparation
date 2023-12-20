#include<iostream>
using namespace std;
bool isPrime(int );
bool isPrime(int n){
    int i=2;
    while(i<=n-1){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;

}
int main(){
    int n;
    cout<<"Enter the value of n here:"<<endl;
    cin>>n;
    bool ans=isPrime(n);
    if(ans==true&&n>0&&n>1){
        cout<<n<<" is a Prime number ";
    }else{
        cout<<n<<" is not a Prime number:"<<endl;
    }
    return 0;
}