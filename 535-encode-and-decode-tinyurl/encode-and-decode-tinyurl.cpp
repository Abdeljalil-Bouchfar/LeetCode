class Solution {
public:
    unordered_map<string,string> mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string key = to_string(rand());
        mp[key] = longUrl;
        return "http://tinyurl.com/" + key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl.substr(19 ,shortUrl.size())];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));