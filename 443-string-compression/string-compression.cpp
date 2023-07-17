class Solution {
public:
    int compress(vector<char>& chars) {
      int len = 0;
      for (int i = 0; i < chars.size();)
      {
          char c = chars[i];
          int j = 0;
          while (i < chars.size() && chars[i] == c)
            i++, j++;
          chars[len++] = c;
          if (j > 1)
          {
              string s = to_string(j);
              for (char &t : s)
                  chars[len++] = t;
          }
      } 
      return len;
    }
};