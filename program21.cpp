#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\t";
    cin>>n;
    int rev=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        rev=(digit*(pow(10,i)))+rev;
        n=n/10;
        i=i+1;
    }
    n=rev;
    cout<<n;
    return 0;
}