/*program to find the longest subarray with
equal number of 0s and 1s using nested loop
*/
/*
#include <iostream>
#include <vector>
using namespace std;

int maxLenBruteForce(vector<int> &arr) {
    int res = 0;

    // Pick a starting point as 's'
    for (int s = 0; s < arr.size(); s++) {
        int sum = 0;

        // Consider all subarrays arr[s...e]
        for (int e = s; e < arr.size(); e++) {
          	sum += (arr[e] == 0) ? -1 : 1;

			// Check if it's a 0-sum subarray
            if (sum == 0)
              	// update max size
                res = max(res, e - s + 1);
        }
    }
    return res;
}

int main() {
    vector<int> arr = { 1, 0, 0, 1, 0, 1, 1 };
    vector<int> arr2 = {0,1,0};
    vector<int> arr3 = {0,1};
    cout << maxLenBruteForce(arr) << endl;   // 6
    cout << maxLenBruteForce(arr2) << endl;  // 2
    cout << maxLenBruteForce(arr3) << endl;  // 2
}
*/

