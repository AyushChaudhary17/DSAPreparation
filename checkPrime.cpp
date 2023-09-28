#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the number here:\n";
    std::cin>>n;
    int i=2;
    while(i<=n){
        if(n%i==0){
            std::cout<<"this is  a Prime number for "<<i<<std::endl;
        }else{
            std::cout<<"this is not a prime number for "<<i<<std::endl;
        }
        i++;
    }
    return 0;
}

