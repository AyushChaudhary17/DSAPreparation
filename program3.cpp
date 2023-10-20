#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    if((a--)>0 && ++b>2){
        cout<<"you are in if\n";
    }
    else{
        cout<<"you are in else:\n";
    }
    cout<<"a is "<<a<<" b is "<<b;
    cout<<endl;
    int number=3;
    cout<<(25*(++number));
    cout<<endl;
    int alpha=1;
    int beta=alpha++;
    int gama=++alpha;
    cout<<beta<<" "<<gama<<endl;
    return 0;
}