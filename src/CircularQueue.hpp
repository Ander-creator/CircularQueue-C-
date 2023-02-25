
#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE

#include <iostream>
#include <vector>

#define SIZE (5)
#define EMPTY (-1)

class CircularQueue{


public:
	CircularQueue():mFront(EMPTY),mNextFreePosition(EMPTY){ }
	virtual ~CircularQueue(){ }

	void enQueue(int input);
	int deQueue();

	bool isFull();
	bool isEmpty();
	void printQueue();
private:
	unsigned int mSize;
	int mFront;
	int mNextFreePosition;
	int mQueue[SIZE];
};

#endif /*CIRCULAR_QUEUE*/