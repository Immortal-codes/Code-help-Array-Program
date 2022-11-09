#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {3, 7, 4, 4, 3, 7, 2};

    int n = 7;
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        k=k^arr[i];
    }

    cout<<k;
}