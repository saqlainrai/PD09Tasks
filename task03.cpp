#include <iostream>
using namespace std;

main()
{
    system("cls");

    while (true)
    {
        string word;
        float amount, bill;
        int counter;

        cout << "Enter the Word: ";
        cin >> word;
        cout << endl;

        int count = word.length();

        if (count % 2 == 0)
        {
            cout << "True"<<endl;
        }
        else
        {
            cout << "False"<<endl;
        }
    }
}