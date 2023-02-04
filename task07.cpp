#include <iostream>
using namespace std;

main()
{
    system("cls");

    while (true)
    {
        int counter = 0;
        string word1, word2;

        cout << "Enter the First String: ";
        cin >> word1;
        cout << endl;

        cout << "Enter the Second String: ";
        cin >> word2;
        cout << endl;

        int count = word1.length();

        for (int x = 0; x < count; x++)
        {
            for (int y = 0; y < count; y++)
            {
                if (word1[x] == word2[y])
                {
                    counter = counter + 1;
                    word2[y]=' ';
                    break;
                }
                
            }
            
        }

        cout << counter <<endl;
    }
}