#pragma once
#include <iostream>
using namespace std;
template <typename MyType>
struct MyStack {
	MyType code;
	MyStack* Next, * Start;
	void new_list(MyType x, MyStack*& MyList) {
		try {
			MyStack* ex = new MyStack;
			ex->code = x;
			ex->Next = MyList->Start;
			MyList->Start = ex;
		}
		catch (bad_alloc & ba) {
			cerr << "bad_alloc caught: " << ba.what() << '\n';
		}
	};
	void Show(MyStack* MyList) {
		try {
			if (MyList->Start == NULL)
				throw "Steck is empty!!\n";
			MyStack* ex = MyList->Start;
			while (ex != NULL)
			{
				cout << ex->code << endl;
				ex = ex->Next;
			}
		}
		catch (const char* exception)
		{
			cerr << "Error: " << exception << '\n';
		}
	};
	void del(MyStack* MyList) {
		try {
			if (MyList->Start == NULL)
				throw "Steck is empty!!\n";
			while (MyList->Start != NULL)
			{
				MyStack* ex = MyList->Start->Next;
				delete MyList->Start;
				MyList->Start = ex;
			}
		}
		catch (const char* exception)
		{
			cerr << "Error: " << exception << '\n';
		}
	};
};
