#include <iostream>
using namespace std;


class stack
{
private:
	int top;
	string* array;
	int size;
public:
	stack()
	{
		cout << "enter the size of the stack: ";
		cin >> size;
		array = new string[size];
		cout << "stack has been created" << endl;
		top = -1;
	}
	void push(string input)
	{
		if (full())
		{
			cout << "stack is full" << endl;
			return;
		}
		else {
			top++;
			array[top] = input;

		}
	}
	string pop()
	{
		if (empty())
		{
			cout << "stack is empty" << endl;
			return "a";
		}
		else {
			cout << array[top];
			delete (&array[top]);
			top--;
			return"b";
		}
	}
	void Top()
	{
		cout << "following is the value of top:" << top << endl;
	}
	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << endl;
		}
	}
	bool full()
	{
		if (top == size - 1)
		{
			return true;
		}
		else return false;
	}
	bool empty()
	{
		if (top == -1)
		{
			return true;
		}
		else return false;
	}
};
void main()
{
	stack s;

	char arr[15];
	string input;

	do {
		cout << "enter the function you want to perform (push , pop, top , print): ";
		cin >> arr;
		if (strcmp(arr, "push") == 0)
		{
			cout << " ";
			cin >> input;
			s.push(input);
		}
		else if (strcmp(arr, "pop") == 0)
		{
			s.pop();
		}
		else if (strcmp(arr, "top") == 0)
		{
			s.Top();
		}
		else if (strcmp(arr, "print") == 0)
		{
			s.print();
		}
	} while (strcmp(arr, "stop") == 1 || strcmp(arr, "stop") == -1);
	{

	}
}

