#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int N;
	cin >> N;

	stack<int> s;
	
	for (int i = 0; i < N; i++)
	{
		string command;
		cin >> command;
		int number;
		if (command == "push")
			cin >> number;

		if (command == "push")
			s.push(number);
		else if (command == "pop")
		{
			if (s.empty())
				cout << -1 << endl;
			else
			{
				cout << s.top() << endl;;
				s.pop();
			}
		}
		else if (command == "size")
			cout << s.size() << endl;
		else if (command == "empty")
			cout << s.empty() << endl;
		else if (command == "top")
		{
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
	}
}