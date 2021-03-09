// C3 P1 Demonstrates for loops - Counter

#include <iostream>
# include <iomanip>
# include <chrono>
# include <thread>
using namespace std;

int main()
{
    string message = "For Loop - Counter";
    for (const auto c : message)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
    string message1 = "\n\na. Counting forward: ";
    for (const auto c : message1)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	for (int count = 1; count < 16; ++count)
	{
		cout << count << " ";
	}
	
	string message2 = "\n\nb. Counting backward: ";
	for (const auto c : message2)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	
	for (int count = 10; count > 0; --count)
	{
		cout << count << " ";
	}
	string message3 = "\n\nc. Counting by tens: ";
	for (const auto c : message3)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	
    for (int count = 0; count < 101; count+= 10)
	{
		cout << count << " ";
	}
    string message4 = "\n\nd. Counting with null statement: ";
    for (const auto c : message4)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	int count = 0;
	for (; count < 5;)
	{
		cout << count << " ";
		++count;
	}
    string message5 = "\n\ne. Counting with nested for loops:\n";
    for (const auto c : message5)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
 
	const int ROWS = 6;
	const int COLUMNS = 5;
	for (int row = 0; row < ROWS; ++row)
	{
		cout << "     ";
		
		for (int col = 0; col < COLUMNS; ++col)
		{
			cout << row << "," << col << "  ";
			
		}
		
		cout << "\n";
	}
	string message6 = "\nEnd of Program";
	for (const auto c : message6)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	return 0;   
}