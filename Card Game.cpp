#include <iostream>
#include <random>
using namespace std;
//could also use a enum to further optimize this code
int main()
{
	srand((unsigned)time(NULL));
	int random2,
		random3,
		random4,
		holder;

	int player_1 = 0;
	int player_2 = 0;
	
	int i = 1;

	while (i <= 2)
	{
		int random = 1 + (rand() % 51);

		cout << "Player " << i << " card is ";


		if (random >= 1 && random <= 13)
		{
			if (random == 11)
			{
				cout << "Jack";
			}
			else if (random == 12)
			{
				cout << "Queen";
			}
			else if (random == 13)
			{
				cout << "King";
			}
			else
			{
				cout << random;
			}
			cout << " of Spades!" << endl;
		}
		else if (random >= 14 && random <= 26)
		{
			random2 = random - 13;
			if (random2 == 11)
			{
				cout << "Jack";
			}
			else if (random2 == 12)
			{
				cout << "Queen";
			}
			else if (random2 == 13)
			{
				cout << "King";
			}
			else
			{
				cout << random2;
			}
			cout << " Hearts!" << endl;
			random += 40;
		}
		else if (random >= 27 && random <= 39)
		{
			random3 = random - 26;
			if (random3 == 11)
			{
				cout << "Jack";
			}
			else if (random3 == 12)
			{
				cout << "Queen";
			}
			else if (random3 == 13)
			{
				cout << "King";
			}
			else
			{
				cout << random3;
			}
			cout << " of Diamonds!" << endl;
		}
		else if (random >= 40 && random <= 52)
		{
			random4 = random - 39;
			if (random4 == 11)
			{
				cout << "Jack";
			}
			else if (random4 == 12)
			{
				cout << "Queen";
			}
			else if (random4 == 13)
			{
				cout << "King";
			}
			else
			{
				cout << random4;
			}
			cout << " of Clubs!" << endl;
		}
		else
		{
			cout << "cant happen";
		}
		if (i <= 1)
		{
			//this is how the cards are determined whoms the winner
			player_1 = random;
			holder = player_1;
			cout << player_1 << " P1" << endl;
		}

		//and this
		player_2 = random;
		i++;
	}

	player_1 = holder;
	cout << player_2 << " P2"<< endl;
	
	if (player_1 > player_2)
	{
		cout << "Player one is the winner";
	}
	else if (player_1 < player_2)
	{
		cout << "Player two is the winner";
	}
	else
	{
		cout << "It is a tie";
		
	}
	return 0;
}
