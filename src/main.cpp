
#include"CircularQueue.hpp"

int main(){

	CircularQueue q;

	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);
	q.enQueue(100);
	q.printQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.enQueue(100);
	q.enQueue(101);
	q.printQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	q.deQueue();
	



	return 0;
}