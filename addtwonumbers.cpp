#include <bits/stdc++.h>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return dummyHead->next;
    }
};

ListNode* createLinkedList(const vector<int>& nums) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int num : nums) {
        if (!head) {
            head = new ListNode(num);
            tail = head;
        } else {
            tail->next = new ListNode(num);
            tail = tail->next;
        }
    }

    return head;
}

void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    cout << "Enter the digits of the first number in reverse order, separated by spaces (end with -1): ";
    vector<int> num1;
    int digit;
    while (cin >> digit && digit != -1) {
        num1.push_back(digit);
    }

    cout << "Enter the digits of the second number in reverse order, separated by spaces (end with -1): ";
    vector<int> num2;
    while (cin >> digit && digit != -1) {
        num2.push_back(digit);
    }

    ListNode* l1 = createLinkedList(num1);
    ListNode* l2 = createLinkedList(num2);

    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);

    cout << "The sum is: ";
    printLinkedList(result);

    return 0;
}
