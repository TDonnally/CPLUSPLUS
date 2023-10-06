#include <iostream>
#include <vector>

using namespace std;

/*
    Inorder Traveseral involves navigating a binary tree from left to right.
                6   
        1               3
    2       3       2       1

    This binary tree what output [2, 1, 3, 6, 2, 3, 1]
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
    int returnValue(TreeNode* root){
        if (root == NULL){
            return;
        };
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> outputVector = {};
        vector<TreeNode*> currentNodes = {root};
        vector<int> currentIndexes = {0};
        //Search the tree to find the left most node so we have a starting point.
        while(currentNodes.size() != 0){
            
        };

        return outputVector;
    }
};

// main() is where program execution begins.
int main() {
    return 0;
}