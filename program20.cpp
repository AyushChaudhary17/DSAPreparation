#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    if(n&1==1){
        cout<<n<<" is a Odd number:\n";
    }else{
        cout<<n<<" is a even number:\n";
   }
   return 0;
}