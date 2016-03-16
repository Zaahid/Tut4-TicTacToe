#include <iostream>
using namespace std;

class tictactoe{
public:
	int board[3][3];
	void move(double value1, double value2, double y)
	{
		if (value1 >= 0 && value2 >= 0 && value1 <= 3 && value2 <= 3)
		{
			board[(int) value1][(int)value2] = y;
		}
		else
		{
			cout << "move not allowed" << endl;
		}
	}


	void reset()
	{
		for (int k = 0; k < 3; k++)
		{
			for (int m = 0; m < 3; m++)
			{
				board[k][m] = 0;
			}
		}
	}

	void print()
	{
		for (int k = 0; k < 3; k++)
		{
			for (int m = 0; m < 3; m++)
			{
				cout << " " << board[k][m] << endl;
			}
			cout << "\t" << endl;
		}
	}

	void over(int y)
	{
		if (board[0][0] == y && board[1][1] == y && board[2][2] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
		if (board[0][0] == y && board[0][1] == y && board[0][2] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
		if (board[1][0] == y && board[1][1] == y && board[1][2] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
		if (board[2][0] == y && board[2][1] == y && board[2][2] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
		if (board[0][0] == y && board[1][0] == y && board[2][0] == y)
		{
			cout << " The winner is participant" << y << endl;
		}
		if (board[0][1] == y && board[1][1] == y && board[2][1] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
		if (board[0][2] == y && board[1][2] == y && board[2][2] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
		if (board[2][2] == y && board[1][1] == y && board[2][0] == y)
		{
			cout << "The winner is participant " << y << endl;
		}
	}

};

void main()
{
	tictactoe obj;
	int participant, val1, val2;
	for (int i = 0; i < 9; i++)
	{
		cout << "Enter participant number: 1 or 2 " << endl;
		cin >> participant;
		cout << "Enter column to participant: " << endl;
		cin >> val1;
		cout << "Enter row to participant: " << endl;
		cin >> val2;
		obj.move(val1, val2, participant);
	}
	int choice;
	bool flag = true;
	while (flag == true){
		cout << "Enter 0 to quit\n1. Reset board\n2. Announce winner\n3. Print board" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			obj.reset();
			break;
		case 2:
			obj.over(participant);
			break;
		case 3:
			obj.print();
			break;

		default:
			flag = false;
			break;
		}
	}
}//Loop