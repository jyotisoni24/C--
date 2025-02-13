int longestOnes(vector<int>& nums, int k) {
    int cnt = 0;
    int startInd = 0;
    int maxLen = 0, j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            cnt++;
        }

        while (cnt > k) {
            if (nums[j] == 0) {
                cnt--;
            }
            j++;
        }
        maxLen = max(maxLen, i - j + 1);
    }

    return maxLen;
}