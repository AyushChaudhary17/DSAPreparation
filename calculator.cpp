#include<iostream>
using namespace std;
int main(){
    int check=0;
    while(1){
        int a,b;
        char operation;
        cout<<endl;
        cin>>a>>operation>>b;

        switch (operation)
        {
        case /* constant-expression */'+':
            /* code */cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            check=0;
            break;
        case '*':
            cout<<a*b;
            check=0;
            break;
        case '/':
            cout<<a/b;
            check=0;
            break;
        case '%':
            cout<<a%b;
            break;
            check=0;
        default: cout<<"Thanks you"<<endl;
                check=1;
            break;
        }
        if(check==1){
            exit(0);
        }
    }
    return 0;
}