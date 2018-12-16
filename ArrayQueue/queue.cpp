#include <iostream>
#include "ArrayQueue.h"

using namespace std;

class List
{
	Block* m_head_block;
	//array<int, 10>::iterator m_head_data;
public:
	List() :m_head_block(nullptr) {}
	~List() {}

	virtual bool push(const int data) = 0;
	virtual bool pop() = 0;
	virtual void delete_all() = 0;
	virtual bool is_block_full() = 0;
	virtual bool is_block_empty() = 0;
	Block& get_m_head_block() { return *m_head_block; }

	void print_all();
};

void List::print_all()
{
	Block* tmp;
	tmp = m_head_block;
	cout << "=====Print All=====" << endl;
	while (tmp != nullptr)
	{
		for (int i; i < tmp->data.size; i++)
		{
			cout << tmp->data[i] << " -> ";
		}
	}

	cout << "=====Print End=====" << endl;
}

class Queue : public List
{
public:
	Queue() : List() {}
	~Queue() {}

	virtual bool push(const int data);
	virtual bool pop();
	virtual void delete_all();
	virtual bool is_block_full();
	virtual bool is_block_empty();
	virtual void print_all();
	
};

bool Queue::push(const int data)
{
	if(m_head_block)
}