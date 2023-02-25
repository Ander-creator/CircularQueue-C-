
#include"CircularQueue.hpp"

bool CircularQueue::isFull(){
	if( (mFront == 0) && (mNextFreePosition == (SIZE-1) ) ){
		return true;
	}else if( ( (mNextFreePosition+1)%SIZE ) == mFront ){
		return true;
	}else{
		return false;
	}
}

bool CircularQueue::isEmpty(){
	if(mFront == EMPTY){
		return true;
	}else{
		return false;
	}
}

void CircularQueue::enQueue(int input){
	if(isFull()){
		std::cout << "Is full !" << std::endl ;
	}else{
		if(mFront == EMPTY){
			mFront = 0;	 
		}
		mNextFreePosition = (mNextFreePosition + 1) % SIZE;
		mQueue[mNextFreePosition] = input;
		std::cout<< "enQueued: " << input << std::endl;
	}
}

int CircularQueue::deQueue(){
	int output;
	if(isEmpty()){
		std::cout << "Is empty !" << std::endl ;
		return -1;
	}else{
		output = mQueue[mFront];
		mFront = (mFront+1)%SIZE;
		if(mFront == (mNextFreePosition+1)%SIZE){
			mFront = EMPTY;
			mNextFreePosition = EMPTY;
			std::cout << "Last Element !" << std::endl ;
		}
		std::cout<< "deQueued: " << output << std::endl;
		return output;
	}
}

void CircularQueue::printQueue(){
	int idx = mFront; 
	std::cout << "Queue: [";
	do{
		std::cout << mQueue[idx] << " ";
		idx = (idx+1)%SIZE;
	}while(idx!=mFront );
	std::cout << "]"<< std::endl;
}