#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number here:\n";
    cin>>n;
    int digit,sum=0,product=1,difference;
    while(n>0){
        digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    difference=product-sum;
    cout<<"Difference between product and sum is "<<difference<<endl;
    return 0;
}