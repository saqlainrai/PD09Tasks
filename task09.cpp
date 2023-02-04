#include <iostream>
using namespace std;

main()
{

    system("cls");

    while (true)
    {

        string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

        string PIN;
        int r1, r2, r3, r4;
        int n1, n2, n3, n4, n0;
        string color;
        int digitaddress;

        int number[4];

        cout << "Enter the PIN: ";
        cin >> PIN;
        cout << endl;

        for (int x = 0; x < 4; x++)
        {
            if (PIN[x]=='0')
            {
                number[x]=0;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='1')
            {
                number[x]=1;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='2')
            {
                number[x]=2;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='3')
            {
                number[x]=3;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='4')
            {
                number[x]=4;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='5')
            {
                number[x]=5;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='6')
            {
                number[x]=6;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='7')
            {
                number[x]=7;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='8')
            {
                number[x]=8;
                digitaddress = number[x]+x;
            }
            else if (PIN[x]=='9')
            {
                number[x]=9;
                digitaddress = number[x]+x;
            }
            else
            {
                cout << "Invalid Value";
            }



            if (digitaddress<=9)
            {
                cout << moves[digitaddress] << " ";
            }
            else
            {
                cout << moves[digitaddress-10] << " ";
            }
        }
        cout << endl ;
    }
}