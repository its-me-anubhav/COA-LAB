#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    cout << "Enter Elements of Array : ";
//Loo-p to Enter Elements    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
// Loop to print Matrix    
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}
