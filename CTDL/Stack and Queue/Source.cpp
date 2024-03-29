#include"Header.h"
void khoiTao(Queue& q) {
	q.front = q.rear = -1;
}
bool isEmpty(Queue q) {
	return q.front == -1 ? true : false;
}
bool isFull(Queue q) {
	return (q.rear - q.front == MAX - 1) ? true : false;
}
void printQueue(Queue q) {
	if (!isEmpty(q))
		for (int i = q.front; i <= q.rear; i++)
			cout << q.list[i] << "\t";
	else
		cout << "Queue rong!";
}
void refreshQueue(Queue& q) {
	int i;
	for (i = q.front; i <= q.rear; i++)
		q.list[i - q.front] = q.list[i];
	i = q.rear;
	q.front = 0;
}
void createQueue(Queue& q, int n) {
	if (n > MAX)
		n = MAX;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> q.list[i];
		if (isEmpty(q))
			q.front = q.rear = 0;
		else
			q.rear++;
	}
}
int deQueue(Queue& q) {
	int gt;
	if (isEmpty(q))
		return -99;
	else {
		gt = q.list[q.front];
		q.front++;
		//refreshQueue(q);
		return gt;
	}
}
void findX(Queue q, int x) {
	for (int i = q.front; i <= q.rear; i++) {
		if (q.list[i] == x) 
			cout << i << "\t";
	}
}
int countX(Queue q, int x) {
	int dem = 0;
	for (int i = q.front; i <= q.rear; i++) {
		if (q.list[i] == x)
			dem++;
	}
	return dem;
}
void enQueue(Queue& q, int x) {
	if (isFull(q))
		cout << "Queue day.";
	else {
		q.rear++;
		q.list[q.rear] = x;
	}
}
void xoaAllX(Queue& q, int x) { 
	Queue qT;
	khoiTao(qT);
	while (!isEmpty(q)) {
		int gt = deQueue(q); 		
		do {
			if (gt != x)
				enQueue(qT, gt);
		} while ();
	}
	while (!isEmpty(qT)) {
		int gt = deQueue(qT);
		enQueue(q, gt);
	}
}
