// Given two sorted linked lists, merge them together in ascending order and return a reference to the merged list

// Ex: Given the following lists...

// list1 = 1->2->3, list2 = 4->5->6->null, return 1->2->3->4->5->6->null
// list1 = 1->3->5, list2 = 2->4->6->null, return 1->2->3->4->5->6->null
// list1 = 4->4->7, list2 = 1->5->6->null, return 1->4->4->5->6->7->null

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
		this->next = NULL;
	}
};
class List {
public:
	Node *head;
	Node *tail;
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
		cout << endl;
	}
};


List *mergeLists(List *l1, List *l2) {
	Node *n1 = l1->head;
	Node *n2 = l2->head;
	List *l3 = new List();

	while (n1 != NULL && n2 != NULL) {
		if (n1->data <= n2->data) {
			l3->push(n1->data);
			n1 = n1->next;
		} else {
			l3->push(n2->data);
			n2 = n2->next;
		}
	}

	while (n1 != NULL) {
		l3->push(n1->data);
		n1 = n1->next;
	}

	while (n2 != NULL) {
		l3->push(n2->data);
		n2 = n2->next;
	}

	return l3;
}
int main()
{
	quickstart();
	List *l1 = new List();
	List *l2 = new List();
	int n, m;
	cin >> n >> m;
	int temp;
	while (n--) {
		cin >> temp;
		l1->push(temp);
	}
	while (m--) {
		cin >> temp;
		l2->push(temp);
	}


	List *l3 = mergeLists(l1, l2);

	l3->traverse();
	return 0;
}