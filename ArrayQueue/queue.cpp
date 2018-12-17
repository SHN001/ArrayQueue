#include <iostream>
#include "ArrayQueue.h"

using namespace std;


bool List::is_full()
{
	if ((m_rear) == m_data.end())
		return true;
	else
		return false;
}

bool List::is_empty()
{
	if (m_front == m_rear)
		return true;
	else
		return false;
}

bool List::reset_all()
{
	array<int, 10>::iterator tmp_itr = m_data.begin();

	if (is_empty())
		return false;

	for (; tmp_itr != m_rear; tmp_itr++)
	{
		*tmp_itr = NULL;
	}
	return true;
}

void List::print_all()
{
	array<int, 10>::iterator tmp_itr = m_front;

	cout << "=====Print All=====" << endl;

	for (; tmp_itr != m_rear; tmp_itr++)
	{
		cout << *tmp_itr;
		if ((tmp_itr + 1) != m_rear)
			cout << " -> ";
	}

	cout << endl;
	cout << "=====Print End=====" << endl;

}



bool Queue::push(const int data)
{
	if (is_full())
	{
		array<int, 10>::iterator tmp_itr = m_front;
		
		for (; tmp_itr != (m_rear-1); tmp_itr++)
		{
			*tmp_itr = *(tmp_itr + 1);
		}

		*(m_rear-1) = data;
		
		return true;
	}
	else
	{
		*m_rear = data;
		m_rear++;
		return true;
	}
	return false;
}

bool Queue::pop()
{
	if (is_empty())
		return false;
	else
		return true;
}

int Queue::front()
{
	if (pop())
		return *m_front;
}
