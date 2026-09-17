class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        if (sum % k == 0) {
            return 0;
        } else {
            for (int i = 0; i < n; i++) {
                while (nums[i] != 0) {
                    nums[i] = nums[i] - 1;
                    sum--;
                    count++;
                    if (sum % k == 0) {
                        return count;
                    }
                }
            }
        }
        return -1;
    }
};