#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    cout<<"Enter the number here:\t";
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0){
        int bit=n&1;
        ans=(ans*pow(10,i))+bit;
        n=n>>1;
        i++;
    }
    cout<<ans;

}