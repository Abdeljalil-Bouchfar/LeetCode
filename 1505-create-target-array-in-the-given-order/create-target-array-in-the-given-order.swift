class Solution {
    func createTargetArray(_ nums: [Int], _ index: [Int]) -> [Int] {
        var ans = [Int]()
        for (i, value) in index.enumerated()
        {
            ans.insert(nums[i], at: value)
        }
        return ans
    }
}