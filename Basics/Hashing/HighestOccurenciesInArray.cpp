#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int maxFreq = 0;
    int answer = nums[0];

    for (int i = 0; i < n; i++) {
        int count = 1;

        while (i + 1 < n && nums[i] == nums[i + 1]) {
            count++;
            i++;
        }

        if (count > maxFreq) {
            maxFreq = count;
            answer = nums[i];
        }
    }

    cout << answer << endl;

    return 0;
}