#include<iostream>
using namespace std;
void Fib(int n);
void Fib(int n){
    int i=0,j=1;
    int count=0;
        while(count<=n){
            if(i==0||i==1){
                cout<<i<<" ";
            }

                int k=i+j;
                cout<<k<<" ";
                i=j;
                j=k;
                count++;
            
    }
}
int main(){
    int n;
    cout<<" The fibonacci series till "<<n<<"th term is "<<endl;
    cin>>n;
    Fib(n);
    return 0;
}