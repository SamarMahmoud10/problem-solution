#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<long long> product(const vector<int>& nums) {
    int n = nums.size();
    vector<long long> result(n);

    for (int i = 0; i < n; i++) {
        long long product = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        result[i] = product;
    }
    return result;
}

signed main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<long long> ans = product(nums);

    cout << "Result: ";
    for (long long x : ans) {
        cout << x << " ";
    }
}