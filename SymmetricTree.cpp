#include <iostream>
#include <vector>


using namespace std;

/*
   Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

    Example1
    Input: root = [1,2,2,3,4,4,3]
    Output: true
    
    Example2
    Input: root = [1,2,2,null,3,null,3]
    Output: false
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;
        if (!left || !right) return false;
        return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }

    };

// main() is where program execution begins.
int main() {
    return 0;
}