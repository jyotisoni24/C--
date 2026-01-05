#include <bits/stdc++.h>
using namespace std;
bool isMaxHeight(int arr[], int n, int m, int mid)
{
    int heightSum = 0;
    int treeCount = 1;
    for (int i = 0; i < n; i++)
    { //
        if (arr[i] - mid >= 0)
        {
            heightSum += arr[i] - mid;
        }
    }
    if (heightSum >= m)
    {
        return true;
    }

    return false;
}
int BinarySearch(int arr[], int n, int m)
{
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isMaxHeight(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {20, 10, 15, 17};
    int n = 4;
    int m = 7;
    cout << BinarySearch(arr, 4, 7);
    return 0;

    return 0;
}