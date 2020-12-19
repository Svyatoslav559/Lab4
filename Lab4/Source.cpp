#include "Header.h"
#include <iostream>
using namespace std;
int main()
{
	MyStack<string>* stack = new MyStack<string>;
	stack->Start = NULL;
	stack->new_list("qwerty", stack);
	stack->new_list("password", stack);
	stack->new_list("code", stack);
	stack->Show(stack);
	stack->del(stack);
	delete stack->Start;
	delete stack;
}