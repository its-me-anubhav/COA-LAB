#include <iostream>
using namespace std;


int main ()
{

    int x , y ;

    cin >> x >> y ;
    cout << endl;

    cout <<"Bitwise AND " << (x&y) << endl;
    cout << "Bitwise OR " << (x|y) << endl;
    cout << "Bitwise XOR " <<(x^y) << endl;
    cout << endl;


    cout << "Bitwise leftshift -> x " << (x<<1) << endl;
    cout << "Bitwise leftshift -> y " << (y<<1) << endl;
    cout << endl;


    cout << "Bitwise rightshift -> x " << (x>>1) << endl;
    cout << "Bitwise rightshift -> y " << (y>>1) << endl;
    cout << endl;


    cout << "Bitwise NOT -> x " << (~x) << endl;
    cout << "Bitwise NOT -> y " << (~y) << endl;
    cout << endl;
}
