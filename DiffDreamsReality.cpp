#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,j,i;
    cin >> n;
    vector<int> arr;
     for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    for (i = 1; i < n; i++)
    {
        for (j = n - 1; j >= i; j--){
            arr[j] -= arr[j - 1];
        }
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] != arr[j - 1])
                break;
        }
        if (j == n)
            break;
    }
    cout << arr[n-1];

    return 0;
}