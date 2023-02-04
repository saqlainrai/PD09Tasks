#include <iostream>
using namespace std;

main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};

    string required;
    float amount, bill, quantity;
    int counter;

    cout << "Enter the Fruit: ";
    cin >> required;
    cout << endl;

    cout << "Enter the Quantity in Kgs: ";
    cin >> quantity;
    cout << endl;

    counter = -1;
    for (int x = 0; x < 4; x++)
    {
        if (required == fruit[x])
        {
            counter = x;
        }
    }

    if (counter >= 0)
    {
        bill = quantity * price[counter];

        cout << bill << endl;
    }
    else
    {
        cout << "Invalid Value";
    }
}