/*
 * @lc app=leetcode.cn id=208 lang=cpp
 *
 * [208] Implement Trie (Prefix Tree)
 */
#include "stdc++.h"
using namespace std;
// @lc code=start
struct Node
{
    bool isLeaf = false;
    Node *subnode[26];
};

class Trie
{
private:
    Node *root = nullptr;

public:
    Trie()
    {
        root = new Node;
    }

    void insert(string word)
    {
    }

    bool search(string word)
    {
    }

    bool startsWith(string prefix)
    {
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end
