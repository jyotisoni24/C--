#include <bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if (arr1[i] != arr2[j])
        {
            if (arr1[i] < arr2[j])
            {
                ans.push_back(arr1[i]);
                i++;
            }
            else
            {
                ans.push_back(arr2[j]);
                j++;
            }
        }
    }
    while (i < n)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {1, 2, 3};
    vector<int> ans;
    ans = findUnion(arr1, arr2, 5, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}