#include<iostream>
bool isEven(int);
bool isEven(int n){
    if(n&1==1){
        return false;
    }
    return true;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:"<<endl;
    cin>>n;
    bool a=isEven(n);
    if(a==true){
        cout<<n<<" is Even";
    }else{
        cout<<n<<" is Odd";
    }
    return 0;
}
