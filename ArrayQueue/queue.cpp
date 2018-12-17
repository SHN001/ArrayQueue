#include <iostream>
#include "ArrayQueue.h"

using namespace std;


bool List::is_full()
{
	if (m_front == data.cend())
		return true;
	else
		return false;
}

bool List::is_empty()
{
	if (m_front == data.cbegin())
		return true;
	else
		return false;
}

bool List::delete_all()
{
	array<int, 10>::iterator tmp_itr = data.begin();

	if (is_empty())
		return false;

	for (; tmp_itr != m_front; tmp_itr++)
	{
		*tmp_itr = NULL;
	}
	return true;
}


void List::print_all()
{
	array<int, 10>::iterator tmp_itr = data.begin();

	cout << "=====Print All=====" << endl;

	for (  ; tmp_itr != m_front; tmp_itr++)
	{
		cout << *tmp_itr;
		if ((tmp_itr + 1) != m_front)
			cout << " -> ";
	}
	cout << endl;
	cout << "=====Print End=====" << endl;

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

