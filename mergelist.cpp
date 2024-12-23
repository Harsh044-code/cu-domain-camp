#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (!list1) return list2;
    if (!list2) return list1;

    if (list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n1, n2;
    cout << "Enter the number of elements in the first list: ";
    cin >> n1;
    cout << "Enter the elements of the first list: ";
    ListNode* list1 = nullptr;
    ListNode* tail1 = nullptr;
    for (int i = 0; i < n1; ++i) {
        int val;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (!list1) {
            list1 = newNode;
            tail1 = newNode;
        } else {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

    cout << "Enter the number of elements in the second list: ";
    cin >> n2;
    cout << "Enter the elements of the second list: ";
    ListNode* list2 = nullptr;
    ListNode* tail2 = nullptr;
    for (int i = 0; i < n2; ++i) {
        int val;
        cin >> val;
        ListNode* newNode = new ListNode(val);
        if (!list2) {
            list2 = newNode;
            tail2 = newNode;
        } else {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

    ListNode* mergedList = mergeTwoLists(list1, list2);
    cout << "The merged list is: ";
    printList(mergedList);

    return 0;
}
