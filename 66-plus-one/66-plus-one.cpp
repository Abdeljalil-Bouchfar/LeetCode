class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, carry = 0;
        int end = digits[i] + 1;
        do
        {
            if (digits[i] != 9)
            {
                digits[i]++;
                break;
            }
            digits[i] = i == 0 ? 1 : 0;
        } while (i--);
        if (digits[0] == 1 && end > 9)
            digits.push_back(end % 10);
        return digits;
    }
};