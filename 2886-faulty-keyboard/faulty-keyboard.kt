class Solution {
    fun finalString(s: String): String {
        var t: String = ""
        for (c in s)
        {
            if (c != 'i')
                t += c
            else
                t = t.reversed()
        }
        return t;
    }
}