#include<iostream>
int fact(int);
int fact(int x){
    int fact1=0;
    if(x==1){
        return x;
    }else{
        fact1=x*fact(x-1);
    }
    return fact1;
}
int main(){
    int n;
    std::cout<<"Enter the value of n here:\n";
    std::cin>>n;
    int factorial=fact(n);
    std::cout<<"Factorial of "<<n<<"is "<<factorial;
    return 0;

}