#include <iostream>
using namespace std;

main()
{
    system("cls");

    while (true)
    {
        string reqArray[4];

        for (int x = 0; x < 4; x++)
        {
            cout << "Define the Array: ";
            cin >> reqArray[x];
            cout << endl;
        }

        if (reqArray[0] == reqArray[1])
        {
            if (reqArray[0] == reqArray[2])
            {
                if (reqArray[0] == reqArray[3])
                {
                    cout << "True" << endl;
                }
                else
                {
                    cout << "False" << endl;
                }
            }
            else
            {
                cout << "False" << endl;
            }
        }
        else
        {

            cout << "False" << endl;
        }
    }
}