#include<iostream>
int power(int);
int power(int x){
    if(x==0){
        return 1;
    }
    else{
        int smallerProblem=power(x-1);
        int biggerProblem=2*smallerProblem;
        return biggerProblem;
    }


}
int main(){
    std::cout<<"Enter the value of n here:\n";
    int n;
    std::cin>>n;
    int pow=power(n);
    std::cout<<"The power of 2 to "<<n<< " is "<<pow;
    return 0;
}