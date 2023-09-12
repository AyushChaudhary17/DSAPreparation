#include<iostream>
int powerfun(int ,int);
int powerfun(int x,int n){
    if(n==0){
        return 1;
    }else{
        int power=x*powerfun(x,n-1);
        return power;
    }
}

int main(){
    int power,x,n;
    std::cout<<"Enter the value of x here:\n";
    std::cin>>x;
    std::cout<<"Enter the value of n here:\n";
    std::cin>>n;
    power=powerfun(x,n);
    std::cout<<"The power of "<<x<<" rais to is "<<n<<" is "<<power;
    return 0;

}