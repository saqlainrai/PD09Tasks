#include <iostream>
using namespace std;

main()
{
    system("cls");

    while (true)
    {
        int reqArray[3];
        int count;

        for (int x = 0; x < 3; x++)
        {
            cout << "Define the Array: ";
            cin >> reqArray[x];
            cout << endl;
        }
        cout << "Enter the Number of transformations: ";
        cin >> count;
        cout << endl;

        for (int x = 0; x < 3; x++)
        {
            if (reqArray[x] % 2 == 0)
            {
                reqArray[x] = reqArray[x] - (count*2);
            }
            else
            {
                reqArray[x] = reqArray[x] + (count*2);
            }
        }

        cout << "[ ";
        for (int x = 0; x < 3; x++)
        {
            cout << reqArray[x] << " ";
        }
        cout << "]"<<endl;
    }
}