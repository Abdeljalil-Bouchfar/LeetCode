// struct Node
// {
//     bool isWord = false;
//     string word;
//     Node* childs[26] = {0};
// };

// void fillTrie(vector<string>& products, Node *root)
// {
//     Node *tmp = root;
//     for (auto &v : products)
//     {
//         for (auto &s : v)
//         {
//             tmp = root;
//             for (auto &c : s)
//             {
//                 if (!tmp->childs[c - 'a'])
//                     tmp->childs[c - 'a'] = new Node;
//                 tmp = tmp->childs[c - 'a'];
//                 tmp.word += c;
//             }
//             tmp->isWord = true;
//         }
//     }
// }



class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        // Node *root = new Node;
        // fillTrie(products, root);

        vector<vector<string>> ans;
        // Node *curr = root, *tmp = nullptr;
        // for (char &c : searchWord)
        // {
        //     curr = curr->childs[c - 'a'];
        //     ans.push_back({});

        //     if (curr)
        //     {
        //         tmp = curr;
        //         while (tmp && ans.back().size() < 3)
        //         {
        //             if (tmp->isWord)
        //                 ans.back().push_back(tmp->word);
        //         }
        //     }
        // }
        sort(products.begin(), products.end());
        string curr;
        for (int j = 0; j < searchWord.size(); ++j)
        {
            curr += searchWord[j];
            ans.push_back({});
            for (int i = 0; i < products.size() && ans.back().size() < 3; ++i)
            {
                if (products[i].substr(0, j + 1) == curr)
                    ans.back().push_back(products[i]);
            }                
        }
        return ans;
    }
};