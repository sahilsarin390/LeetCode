class Solution
{
public:
    int numberOfSteps(int num)
    {
        int count = 0;
        while (num)
        {
            if (num % 2)
            { // odd
                --num;
            }
            else
            { // even
                num /= 2;
            }
            ++count;
        }
        return count;
    }
};

// class Solution
// {
// public:
//     int numberOfSteps(int num)
//     {
//         return num == 0 ? 0 : log2(num) + bitset<32>(num).count();
//     }
// };