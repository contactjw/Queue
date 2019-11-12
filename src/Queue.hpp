#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include "LinkedList.hpp"

class Queue: private LinkedList {
private:
	int maxSize;
public:
	Queue();
	Queue(int);
	void enqueue(Customer*);
	void dequeue();
	Customer* front();
	bool isEmptyQueue();
	bool isFullQueue();
	virtual ~Queue();
};

#endif /* QUEUE_HPP_ */
