#include<iostream>
using namespace std;
void halfAdder(int a,int b){
    int sum,carry;
    sum=a^b;
    carry=a&b;
    cout<<"sum "<<sum<<endl;
    cout<<"carry "<<carry<<endl;
}
    int main() {
        int a=1;
        int b=0;
        halfAdder(a,b);
        return 0;
    }
