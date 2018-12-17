#include <iostream>
#include "ArrayQueue.h"

using namespace std;

bool List::is_list_full()
{
	Block* last = m_head_block;

	if (!m_head_block)
		return false;

	while (last->next_block != nullptr)
	{
		last = last->next_block;
	}

	if (last->data_itr == last->data.cend())
		return true;
	else
		return false;
}

bool List::is_list_empty()
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

bool Queue::push(const int data)
{
	if (is_list_empty)
	{
		m_head_block = new Block;
		m_rear_block = m_head_block;
		m_head_block->next_block = nullptr;

		m_head_block->data_itr = m_head_block->data.begin();
		*(m_rear_block->data_itr) = data;
		m_rear_block->data_itr++;
		return true;
	}

	if (is_list_full)
	{
		Block* tmp = new Block;
		m_rear_block->next_block = tmp;
		m_rear_block = tmp;

		m_rear_block->data_itr = m_rear_block->data.begin();
		*(m_rear_block->data_itr) = data;
		m_rear_block->data_itr++;
		return true;
	}
	else
	{
		*(m_rear_block->data_itr) = data;
		m_rear_block->data_itr++;
		return true;
	}

	return false;
}

bool Queue::pop()
{

}

int Queue::front()
{

}