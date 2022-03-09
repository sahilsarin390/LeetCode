// O(n)

class Solution
{
public:
    int numIdenticalPairs(vector<int> &A)
    {
        int res = 0;
        unordered_map<int, int> count;
        for (int a : A)
        {
            res += count[a]++;
        }
        return res;
    }
};

// O(n^2)

// class Solution
// {
// public:
//     int numIdenticalPairs(vector<int> &nums)
//     {
//         int k = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {

//             for (int j = 0; j < nums.size(); j++)
//             {
//                 if (nums[i] == nums[j] & i < j)
//                 {
//                     k++;
//                 }
//             }
//         }
//         return k;
//     }
// };