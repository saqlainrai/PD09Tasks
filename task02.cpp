#include <iostream>
using namespace std;

main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

    while (true)
    {
        string movie;
        float amount, bill;
        int counter;

        cout << "Enter the Movie: ";
        cin >> movie;
        cout << endl;

        counter = -1;

        for (int x = 0; x < 5; x++)
        {
            if (movie == movies[x])
            {
                counter = x;
            }
        }

        if (counter % 2 == 0)
        {
            amount = (10 * 500) / 100;
            bill = 500 - amount;
            cout << bill << endl;
        }
        else
        {
            amount = (5 * 500) / 100;
            bill = 500 - amount;
            cout << bill << endl;
        }
    }
}