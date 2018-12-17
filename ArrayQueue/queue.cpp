#include <iostream>
#include "ArrayQueue.h"

using namespace std;


bool Queue::is_full()
{
	if (m_rear == (data.size-1))
		return true;
	else
		return false;
}

bool Queue::is_empty()
{
	if (m_front == m_rear)
		return true;
	else
		return false;
}

bool List::delete_all()
{
	array<int, 10>::iterator tmp_itr = data.begin();

	if (is_empty())
		return false;

	for (; tmp_itr != data.cend(); tmp_itr++)
	{
		*tmp_itr = NULL;
	}
	return true;
}



bool Queue::push(const int data)
{
	if (is_full())
	{
		m_front = this->data.begin();
		*m_front = data;
		m_front++;
	}
	else
	{
		*m_front = data;
		m_front++;
	}
	return true;
}

bool Queue::pop()
{
	if (m_front == data.cbegin())
		return false;
	else
		return true;
}

int Queue::front()
{
	if (pop())
		return *(m_front-1);
}


void Queue::print_all()
{
	array<int, 10>::iterator tmp_itr = m_front;

	cout << "=====Print All=====" << endl;

	for (; tmp_itr != data.end(); tmp_itr++)
	{
		cout << *tmp_itr;
		if ((tmp_itr + 1) != data.end())
			cout << " -> ";
	}

	/*
	for (  ; tmp_itr != m_front; tmp_itr++)
	{
		cout << *tmp_itr;
		if ((tmp_itr + 1) != m_front)
			cout << " -> ";
	}
	*/
	cout << endl;
	cout << "=====Print End=====" << endl;

}