#include <iostream>
#include "ArrayQueue.h"

using namespace std;

Block& List::get_head_block() { return *m_head_block; }

bool List::is_block_full()
{
	if (m_head_block && (m_head_block->data_itr == m_head_block->data.cend))
		return true;
	else
		return false;
}

bool List::is_block_empty()
{
	if (!m_head_block)
		return true;
	else
		return false;
}

bool List::delete_all()
{
	Block* next;
	if (!m_head_block)
		return false;
	while (m_head_block)
	{
		next = m_head_block->next_block;
		delete m_head_block;
		m_head_block = next;
	}
	
	return true;
}

void List::print_all()
{
	Block* tmp;
	tmp = m_head_block;

	if (!m_head_block)
		cout << "=====Empty!=====" << endl;
		
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
	if (!get_head_block)
	{

	}
}