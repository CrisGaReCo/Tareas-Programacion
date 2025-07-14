#include <iostream>
#include "LQueue.h"
using namespace std;

int main()
{
    LQueue<int> queue;

    cout << "Agregando elementos a la cola (Enqueue): 10, 20, 30" << endl;
    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);

    cout << "Cantidad de elementos en la cola: " << queue.GetCount() << endl;

    cout << "Primer elemento (Front): " << queue.Front() << endl;

    cout << "Quitando elemento (Dequeue): " << queue.Dequeue() << endl;
    cout << "Nuevo primer elemento (Front): " << queue.Front() << endl;

    cout << "Cantidad de elementos en la cola: " << queue.GetCount() << endl;

    cout << "Quitando todos los elementos restantes:" << endl;
    while (queue.GetCount() > 0) {
        cout << "Dequeue: " << queue.Dequeue() << endl;
    }

    cout << "Intentando hacer Dequeue en una cola vacía:" << endl;
    queue.Dequeue();

    return 0;
}
