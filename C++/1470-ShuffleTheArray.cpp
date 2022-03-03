class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {

        for (int i = n; i < nums.size(); i++)
        {
            nums[i] = (nums[i] * 1024) + nums[i - n];
        }

        int j = 0;
        for (int i = n; i < nums.size(); i++, j += 2)
        {
            nums[j] = nums[i] % 1024;
            nums[j + 1] = nums[i] / 1024;
        }
        return nums;
    }
};