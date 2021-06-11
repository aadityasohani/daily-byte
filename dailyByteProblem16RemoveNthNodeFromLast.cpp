//  Given a linked list and a value n, remove the nth to last node and return the resulting list.

// Ex: Given the following linked lists...

// 1->2->3->null, n = 1, return 1->2->null
// 1->2->3->null, n = 2, return 1->3->null
// 1->2->3->null, n = 3, return 2->3->null

#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
#define u_set unordered_set
#define testfor(T) ll T; cin>>T; while(T--)
using namespace std;
void quickstart()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
}
class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }


    void push(int data) {
        Node *temp = new Node(data);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    void traverse() {
        Node *temp = this->head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "null " << endl;
    }
};

void deleteNth(List *l, int n) {
    if (n <= 0) {
        return;
    }
    if (l->head == NULL || (l->head)->next == NULL) {
        l->head = NULL;
        return;
    }
    Node *slow = l->head;
    Node *fast = l->head;
    Node *prevSlow = l->head;
    while (--n && fast != NULL) {
        fast = fast->next;
    }
    if (fast == NULL) {
        cout << "Deletion Not possible" << endl;
        return;
    }

    while (fast != l->tail) {
        prevSlow = slow;
        slow = slow->next;
        fast = fast->next;
    }
    if (slow == l->head) {
        l->head = l->head->next;
        return;
    }
    prevSlow->next = slow->next;
    delete slow;
}

int main()
{
    quickstart();
    int n, k;
    cin >> n >> k;
    int temp;
    List *l1 = new List();
    while (n--) {
        cin >> temp;
        l1->push(temp);
    }

    deleteNth(l1, k);
    l1->traverse();

    return 0;
}