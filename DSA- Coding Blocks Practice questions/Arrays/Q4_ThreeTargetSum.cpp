#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> n;
    }
    int first = 0;
    int last = n - 1;
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] + a[last] + a[first]) > key)
        {
            last--;
        }
        else if ((a[i] + a[last] + a[first]) < key)
        {
            first++;
        }
        else
        {
            cout << a[i] << " " << a[last] << endl;
            first++;
            last--;
        }
    }
    return 0;
}