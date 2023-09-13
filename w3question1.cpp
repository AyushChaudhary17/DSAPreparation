// print first 50 natural numbers:
#include<iostream>
int print50(int);
int print50(int n){
    if(n==0){
        return 1;
    }else{
        print50(n-1);
        std::cout<<n<<" ";
        // print50(n-1);
    }
}
int main(){
    int n=50;
    print50(n);
    return 0;
}