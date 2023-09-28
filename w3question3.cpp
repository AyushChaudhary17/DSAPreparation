#include<iostream>
int Fib(int );
int Fib(int nth){
    int term;
    if(nth==1){
        return 0;
    }else if(nth==2){
        return 1;
    }else{
        term = Fib(nth-1)+Fib(nth-2);
    }
    return term;
}
int main(){
    int nth;
    std::cout<<"Enter your nth term here:\n";
    std::cin>>nth;
    int term=Fib(nth);
    std::cout<<"the "<<nth<<" term of the series is "<<term;
    return 0;
}