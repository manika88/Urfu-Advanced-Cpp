#include "circular_queue.hpp"

CircularQueue::CircularQueue(size_t size)
{
	CircularQueue::CircularQueue(size_t max_size) : capacity(max_size)
	{
   		 mass.resize(capacity);
	}
}

bool CircularQueue::Push(int value)
{
    if (Full()) {
        return false;
    }
    else{
    		mass[end] = value;
    		end = (end + 1) % capacity;
    		size++;
    		return true;
	}
}

bool CircularQueue::Pop()
{
    if (Empty()) {
        return false;
    }
    else{
    	end = (end - 1) % capacity;
    	size--;
    	return true;
    }
}

int CircularQueue::Front() const
{
    if(Empty())
    {
	    return -1;
    }
	else
    {
	    return mass[front];
    }
}

int CircularQueue::Back() const
{
    if(Empty())
    {
	    return -1;
    }
	else
    {
	    return mass[end];
    }
}

bool CircularQueue::Empty() const
{
    return size == 0;
}

bool CircularQueue::Full() const
{
    return size == capacity;
}
