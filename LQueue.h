#pragma once
#include "SentinelLinkedList.h"
#include <iostream>
using namespace std;

template <typename T>
class LQueue
{
private:
	SentinelLinkedList<T> data;

public:
	LQueue() {}

	int GetCount() { return data.GetCount(); }

	void Enqueue(T value);  // implementación abajo

	T Dequeue();            // implementación abajo

	T Front() { return data.Front(); }
};

// Implementaciones fuera de la clase (como pidieron)

template <typename T>
void LQueue<T>::Enqueue(T value)
{
	data.PushBack(value);
}

template <typename T>
T LQueue<T>::Dequeue()
{
	return data.PopFront();
}
