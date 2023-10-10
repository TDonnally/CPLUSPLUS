#include <iostream>
#include <vector>


using namespace std;

/*
   Given the root of a binary tree, return its maximum depth.

    A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

    Example1
    Input: root = [3,9,20,null,null,15,7]
    Output: 3
    
    Example2
    Input: root = [1,null,2]
    Output: 2
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
    int maxDepth(TreeNode* root) {
        //BASE
        if(!root){
            return 0;
        }
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight) + 1;
    }
};

// main() is where program execution begins.
int main() {
    Solution s;

    // Example 1: Create a binary tree [3, 9, 20, null, null, 15, 7]
    TreeNode* root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);

    // Calculate and log the maximum depth
    int depth1 = s.maxDepth(root1);
    cout << "Maximum Depth (Example 1): " << depth1 << endl;

    // Example 2: Create a binary tree [1, null, 2]
    TreeNode* root2 = new TreeNode(1);
    root2->right = new TreeNode(2);

    // Calculate and log the maximum depth
    int depth2 = s.maxDepth(root2);
    cout << "Maximum Depth (Example 2): " << depth2 << endl;

    // Clean up allocated memory (important for preventing memory leaks)
    delete root1;
    delete root2;

    return 0;
}