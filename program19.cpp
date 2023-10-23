#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int product=1;
    int sum=0;
    while(n>0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int difference = product-sum;
    cout<<"Difference between the product and the sum of the digits of the number is "<<difference<<endl;
    return 0;
}