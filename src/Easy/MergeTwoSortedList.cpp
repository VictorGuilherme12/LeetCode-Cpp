#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

using namespace std;

ListNode* MergeTwoList(ListNode* list1, ListNode* list2)
{
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    ListNode dummy(0);
    ListNode* current = &dummy;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val <= list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }
        
        current = current->next;
    }

    if (list1 != nullptr) current->next = list1;
    if (list2 != nullptr) current->next = list2;

    return dummy.next;
}

void RunMergeTwoList()
{
    // Case 1: [1,2,4] + [1,3,4]
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
    ListNode* result = MergeTwoList(list1, list2);
    for (ListNode* curr = result; curr != nullptr; curr = curr->next)
        cout << curr->val << " ";
    cout << endl;

    // Case 2: [] + []
    result = MergeTwoList(nullptr, nullptr);
    if (result == nullptr) cout << "[]" << endl;

    // Case 3: [] + [0]
    ListNode* list3 = new ListNode(0);
    result = MergeTwoList(nullptr, list3);
    for (ListNode* curr = result; curr != nullptr; curr = curr->next)
        cout << curr->val << " ";
    cout << endl;
}