class Solution {
    func finalValueAfterOperations(_ operations: [String]) -> Int {
        var nb = 0
        for op in operations {
            if op.contains("+") { nb += 1 }
            else { nb -= 1 }
        }
        return nb
    }
}