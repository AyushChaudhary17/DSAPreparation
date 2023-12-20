#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int temp=n;
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(rev<INT32_MIN/2||rev>INT32_MAX){
        cout<<"Reverse of the "<<temp<<" is "<<0<<endl;
    }else{
        n=rev;
        cout<<"The reverse of the "<<temp<<" is "<<n<<endl;
    }
    return 0;
}