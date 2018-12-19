#pragma once
#ifndef PRIORITY_QUEUE
#define PRIORITY_QUEUE
class PriorityQueue {
public:
	PriorityQueue() = default;
	~PriorityQueue();
	PriorityQueue(const PriorityQueue &obj);
	explicit PriorityQueue(int size);
	bool isEmpty();

	bool isEmpty() const;

	bool isFull();

	bool isFull() const;

	int top();

	int top() const;

	int pop();

	void enqueue(int value, int priority);

	PriorityQueue &operator=(const PriorityQueue &rhs);

	int *data_;
	int *priorities_;

private:
	int size_;
	int end_;
};
#endif