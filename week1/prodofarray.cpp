class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int beforei = 1;
        int afteri = 1;
        vector<int> f(nums.size(), 1);

        for(int i=0;i<nums.size();i++){
            f[i] *= beforei;
            beforei *= nums[i];
            f[nums.size()-i-1] *= afteri;
            afteri *= nums[nums.size()-i-1];
        }

        return f;
    }
};