#include <iostream>
#include <string>
using namespace std;
int max_array(int a[], int n)
{

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{

    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = max_array(a, n);
    cout << max;
}