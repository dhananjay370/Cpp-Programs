#include <iostream>
using namespace std;
int main()
{
    int guess, attempt, num;
    attempt = 1;
    srand(time(0));
    num = rand() % 100 + 1;

    do
    {
        cout << "Guess the Number between 1 to 100 : ";
        cin >> guess;
        if (guess < num)
        {
            cout << "Higher Number Please!\n";
        }
        else if (guess > num)
        {
            cout << "Lower Number Please!\n";
        }
        else
        {
            cout << "You Guessed it! in " << attempt << " Attempts ";
        }

        attempt++;

    } while (guess != num);

    return 0;
}

