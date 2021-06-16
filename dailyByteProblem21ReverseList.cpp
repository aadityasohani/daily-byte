// Given a linked list, containing unique values, reverse it, and return the result.

// Ex: Given the following linked lists...

// 1->2->3->null, return a reference to the node that contains 3 which points to a list that looks like the following: 3->2->1->null
// 7->15->9->2->null, return a reference to the node that contains 2 which points to a list that looks like the following: 2->9->15->7->null
// 1->null, return a reference to the node that contains 1 which points to a list that looks like the following: 1->null



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
	Node* next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

class List {
public:
	Node *head;
	List() {
		this->head = NULL;
	}

	void push(int data) {
		Node *temp = new Node(data);
		if (head == NULL) {
			head = temp;
		} else {
			Node *temp1 = head;
			while (temp1->next != NULL) {
				temp1 = temp1->next;
			}
			temp1->next = temp;
		}
	}
	Node *reverse() {
		Node *temp;
		Node *temp1;
		Node *tail = NULL;
		temp = head;
		Node *mainTail = NULL;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		tail = temp;
		mainTail = temp;
		while (tail != head) {
			temp = head;
			temp1 = head;
			while (temp != tail) {
				temp1 = temp;
				temp = temp->next;
			}

			temp->next = temp1;
			tail = temp1;
		}
		head->next = NULL;
		head = mainTail;
		return head;
	}
};
void traverse(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " => ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	quickstart();
	List *l = new List();
	int n;
	cin >> n;
	int temp;
	while (n--) {
		cin >> temp;
		l->push(temp);
	}

	traverse(l->head);

	Node *revHead = l->reverse();
	traverse(revHead);
	return 0;
}