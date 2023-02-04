#include <iostream>
using namespace std;

main()
{
    system("cls");

    while (true)
    {
        int arrsize;

        cout << "Enter the size of Array: ";
        cin >> arrsize;
        cout << endl;

        int reqArray[arrsize];

        for (int x = 0; x < arrsize; x++)
        {
            cout << "Define the Array: ";
            cin >> reqArray[x];
            cout << endl;
        }
        for (int x = 0; x < arrsize; x++)
        {
            reqArray[x]=reqArray[x]%10;
            
            if ((reqArray[x] == 7) || (reqArray[x] % 10 == 7))
            {
                cout << "Boom" << endl ;
            }
            else
            {
                cout << "******************"<<endl;
            }
        }
    }
}