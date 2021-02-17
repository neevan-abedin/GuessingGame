//Guessing Game- Nabhan Abedin
//2.17.2021

//input and output operations
# include <iostream>

//file location
using namespace std;

int main()
{
	//initialize values
	int answer;
	int guess;
	bool playing = true;
	//initialize random number generator
	srand(time(0));

	while (playing == true)
    {
		//initialize guess counter and actual answer
		int counter = 0;
		answer = rand() % 100;
		do
		{
			cout << "\nGuess a number between 0 & 100 :";
			cin >> guess;
			counter++;

			if (guess > answer)
			{
				cout << "\nToo high :/\n";
			}
			else if (guess < answer)
			{
				cout << "\nToo low :/\n";
			}
			else
			{
				cout << "\nYou guessed right! That took you " << counter << " tries\n\n";
			}
		} while (guess != answer);
		//ask to play again
		char f;
		cout << "Play again? Y/N\n\n";
		cin >> f;
		if (f == 'y')
        {
			playing = true;
        }
		else
        {
			playing = false;
        }
    }
	return 0;
}