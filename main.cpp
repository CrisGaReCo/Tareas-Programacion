#include "Stack.h"
#include "LStack.h"

int main() {
    cout << "Codigo que vimos en clase" << endl;
    Stack<int> stack;
    stack.Push(1);
    stack.Push(2);
    cout << "Peak: " << stack.Peak() << endl;
    cout << "Pop: " << stack.Pop() << endl;

    cout << "codigo con forward_list" << endl;
    LStack<int> lstack;
    lstack.Push(10);
    lstack.Push(20);
    cout << "Peak: " << lstack.Peak() << endl;
    cout << "Pop: " << lstack.Pop() << endl;

    return 0;
}

