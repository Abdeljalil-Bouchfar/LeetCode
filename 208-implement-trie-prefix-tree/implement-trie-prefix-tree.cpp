struct Node {
    bool isWord = false;
    Node* childrens[26] = {0};
};

class Trie {
public:
    Node* root = new Node;
    Trie() {
    }
    
    void insert(string word) {
        Node *curr = root;
        for (char &c : word)
        {
            if (!curr->childrens[c - 'a'])
                curr->childrens[c - 'a'] = new Node;
            curr = curr->childrens[c - 'a'];
        }
        curr->isWord = true;
    }
    
    bool search(string word) {
       Node *curr = root;
       int i = 0;
       while(curr && i < word.size())
           curr = curr->childrens[word[i++] - 'a'];
        return i == word.size() && curr && curr->isWord;
    }
    
    bool startsWith(string prefix) {
       Node *curr = root;
       int i = 0;
       while(curr && i < prefix.size())
           curr = curr->childrens[prefix[i++] - 'a'];
        return i == prefix.size() && curr;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */