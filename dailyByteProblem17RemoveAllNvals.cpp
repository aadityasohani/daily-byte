//  Given a linked list and a value, remove all nodes containing the provided value, and return the resulting list.

// Ex: Given the following linked lists and values...

// 1->2->3->null, value = 3, return 1->2->null
// 8->1->1->4->12->null, value = 1, return 8->4->12->null
// 7->12->2->9->null, value = 7, return 12->2->9->null

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
void deleteNs(List *l, int data) {
    if (l->head == NULL) {
        return;
    }

    while (l->head != NULL && (l->head)->data == data) {
        l->head = (l->head)->next;
    }

    Node *prev = l->head;
    Node *curr = (l->head)->next;

    while (curr != NULL) {
        if (curr->data == data) {
            prev->next = curr->next;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
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

    deleteNs(l1, k);

    l1->traverse();
    return 0;
}