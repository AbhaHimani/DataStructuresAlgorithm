#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 2d array take input
    int n, m;
    cin >> n >> m;
    int a[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[j][i] << " ";
            }
        }
        else
        {

            for (int k = n - 1; k >= 0; k--)
            {
                cout << a[k][i] << " ";
            }
        }
    }

    return 0;
}