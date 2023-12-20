#include<iostream>
using namespace std;
int POW(int,int);
int POW(int x,int i){
    int j=1;
    int pow=1;
    while(j<=i){
        pow=pow*x;
        j++;
    }
    return pow;
}
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int temp=n;
    int count=0;
    while(temp>0){
        count++;
        temp=temp/2;
    }
    int i=count;
    int bin=0;
    temp=n;
    while(n>0){
        int bit=n%2;
        bin=bin+bit*POW(10,i);
        n=n/2;
        i--;
    }
    n=bin;
    int temp2=n;
    count=0;
    while(temp2>0){
        count=count+1;
        temp2=temp2/10;
    }
    i=count-1;
    temp2=n;
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=rev+digit*POW(10,i);
        n=n/10;
        i--;
    }
    n=rev;
    cout<<"Binary of "<<temp<<" is "<<n<<endl;
    return 0;
    
}