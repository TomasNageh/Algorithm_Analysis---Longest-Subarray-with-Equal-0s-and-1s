#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> a, int i = 0, int sum = 0,
           unordered_map<int, int> mp = {{0, -1}}, int len = 0)
{
    int n = a.size();
    if (i == n)
        return len;                    // base case

    sum += a[i] == 0 ? -1 : 1;        // O(1)
    if (mp.find(sum) == mp.end())      // O(1)
        mp[sum] = i;                   // O(1)
    else
        len = max(len, i - mp[sum]);   // O(1)

    return maxLen(a, i + 1, sum, mp, len);  // one recursive call
}

int main() {
    vector<int> arr = { 1, 0, 0, 1, 0, 1, 1 };
    vector<int> arr2 = {0,1,0};
    vector<int> arr3 = {0,1};
    cout << maxLen(arr) << endl;   // 6
    cout << maxLen(arr2) << endl;  // 2
    cout << maxLen(arr3) << endl;  // 2
}
