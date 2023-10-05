#include <iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* current = head;
      while (current != nullptr){
        if (current->next != nullptr && current->val == current->next->val) {
            cout<<current->val;
            ListNode* duplicateNode = current->next; 
            current->next = current->next->next; 
            delete duplicateNode; 
        } else {
            cout<<current->val;
            current = current->next; 
        }
      }

      return head;
    }
};

// main() is where program execution begins.
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(1);

    Solution s;
    cout << s.deleteDuplicates(head);
    return 0;
}