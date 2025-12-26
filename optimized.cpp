#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<long long> productExceptSelfOptimized(const vector<int>& nums) {
    int n = nums.size();
    vector<long long> result(n, 1);

    long long prefix = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= nums[i];
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

    vector<long long> output = productExceptSelfOptimized(nums);

    cout << "Result: ";
    for (long long x : output) {
        cout << x << " ";
    }
    return 0;

}