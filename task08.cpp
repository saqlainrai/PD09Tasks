#include <iostream>
using namespace std;

main()
{
    system("cls");

    while (true)
    {
        int totalTime = 0;
        int arrSize, time;
        string color;

        cout << "Enter the Array Size: ";
        cin >> arrSize;
        cout << endl;

        string colors[arrSize];

        for (int x = 0; x < arrSize; x++)
        {
            cout << "Define the Colors: ";
            cin >> colors[x];
            cout << endl;
        }


        time = arrSize * 2 ;
        totalTime = time + (arrSize-1);

        cout << totalTime << endl << endl;
    }
}