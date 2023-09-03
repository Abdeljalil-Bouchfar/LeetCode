class Solution {
public:
    int fib(int n) {
        int db[31] = {0};
        db[1] = 1;
        for (int i = 2; i <= n; ++i)
            db[i] = db[i-1] + db[i-2];
        return db[n];
    }
};