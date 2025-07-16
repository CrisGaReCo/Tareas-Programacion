#pragma once
#include <iostream>
#pragma once
#include <iostream>
#include <forward_list>
using namespace std;

template <typename T>
class LStack
{
public:
    LStack() : count(0) {}

    void Push(T value)
    {
        data.push_front(value);
        count++;
    }

    T Pop()
    {
        if (data.empty())
        {
            cout << "Advertencia, intenta sacar mas elementos de los que hay dentro del Stack." << endl;
            return {};
        }

        T value = data.front();
        data.pop_front();
        count--;
        return value;
    }

    T Peak()
    {
        if (data.empty())
        {
            cout << "Advertencia, LStack ya esta vacia, no hay elemento para hacer Peak" << endl;
            return {};
        }

        return data.front();
    }

    int Count() const
    {
        return count;
    }

private:
    forward_list<T> data;
    int count;
};
