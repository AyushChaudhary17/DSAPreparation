#include<iostream>
int fact(int);
int fact(int x){
    int factorial;
    if(x==1){
        return x;
    }else{
        factorial=x*fact(x-1);
    }
    return factorial;

}
int main(){
    std::cout<<"Enter the value of n here:\n";
    int n;
    std::cin>>n;
    int factorial;
    factorial=fact(n);
    std::cout<<"Factorial of "<<n<<" is "<<factorial;

    return 0;
}