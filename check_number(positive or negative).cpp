#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    
    //Conditions to check if the number is negative or positive
    if (num > 0)
         cout << "The number is positive";
    else if (num < 0)
        cout << "The number is negative";
    else
        cout << "Zero";
    
    return 0;
}
