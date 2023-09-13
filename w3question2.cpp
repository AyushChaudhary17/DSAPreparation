#include<iostream>
int calSum(int);
int calSum(int n){
    int Sum;
    if(n==0){
        return 0;
    }else{
        Sum=n+calSum(n-1);
    }
    return Sum;
}
int main(){
    int n=5,total;
    total=calSum(n);
    std::cout<<"Sum of first "<<n<<" Numbers is "<<total;
    return 0;

}