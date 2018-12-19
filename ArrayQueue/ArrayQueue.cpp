#include <iostream>
#include "ArrayQueue.h"

using namespace std;


bool Queue::is_full()
{
	if (m_rear == m_data.end())
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

bool Queue::reset_all()
{
	if (is_empty())
		return false;

	for (auto tmp_itr = m_data.begin(); tmp_itr != m_rear; tmp_itr++)
	{
		*tmp_itr = NULL;
	}
	m_front = m_data.begin();
	m_rear = m_data.begin();

	return true;
}

void Queue::print_all()
{
	if (is_empty())
	{
		cout << "!!!Empty!!!" << endl;
		return;
	}

	cout << "=====Print All=====" << endl;

	for (auto tmp_itr = m_front ; tmp_itr != m_rear; tmp_itr++)
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
		for (auto tmp_itr = m_front ; tmp_itr != (m_rear-1); tmp_itr++)
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
	{
		for (auto tmp_itr = m_front ; tmp_itr != (m_rear - 1); tmp_itr++)
		{
			*tmp_itr = *(tmp_itr + 1);
		}
		
		*(m_rear-1) = NULL;
		m_rear--;

		return true;
	}
}


int Queue::front()
{
	if (!is_empty())
		return *m_front;
	else
		return 0;
}
