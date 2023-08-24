class Solution {
public:
    int tribonacci(int n) {
        int arr[3] = {0, 1, 1};
        if (n < 3)
            return arr[n];
        for (int i = 3, sum; i < n; i++)
        {
            sum = arr[0] + arr[1] + arr[2];
            arr[0] = arr[1], arr[1] = arr[2], arr[2] = sum;
        }
        return arr[0] + arr[1] + arr[2];
    }
};