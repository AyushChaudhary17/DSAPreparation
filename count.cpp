#include<iostream>
int count(int);
int count(int n){
    if(n==0){
        return 0;
    }else{
        count(n-1);
        std::cout<<" "<<n;
    }
}
int main(){
    int x;
    std::cout<<"Enter the value of x here:\n";
    std::cin>>x;
    count(x);
    return 0;
}