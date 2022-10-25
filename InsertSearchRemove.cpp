#include <iostream>
#include <algorithm>
using namespace std;

// Hello there! In order to use the app I ran the code in the terminal to give it inputs.
// It's simple. Once you run the app type either (insert, search or remove) to do the corresponding operation.
// For the insert and search methods I used the element value rather than the index. For the remove method though I used the index instead.
// The testing array is {4, 5, 6, 7, 8} so use the code putting it in mind.
// Have fun!

void search(int val[], int valSize)
{
    int value;
    cout << "What number are you searching for? ";
    cin >> value;

    for (size_t i = 0; i < valSize; i++)
    {
        if (val[i] == value)
        {
            cout << "value present at index no: " << i << '\n';
            return;
        }
    }
    cout << "Entered value does not exist." << '\n';
}

void insert(int val[], int valSize)
{
    int elem;
    cout << "Enter you desired element: ";
    cin >> elem;
    val[valSize] = elem;
    cout << "The new array is as follows: ";
    for (int i = 0; i <= valSize; i++)
    {
        cout << val[i] << " ";
    }
    
}

void remove(int val[], int valSize)
{
    int index;
    cout << "What index do you want to remove ? ";
    cin >> index;

    if(index > valSize -1 || index < 0)
    {
        cout << "Entered index doesn't exist!";
    }
    else{
        for (int i = index; i < valSize - 1; i++)
        {
            val[i] = val[i + 1];
        }

        cout << "The new array is as follows: ";
        for (int i = 0; i < valSize - 1; i++)
        {
            cout << val[i] << " ";
        }
    }    
}

int main()
{
    int val[] = {4, 5, 6, 7, 8};
    int valSize = sizeof(val) / sizeof(val[0]);

    string choice;
    cout << "The array is as follows: ";
    for (int i = 0; i < valSize; i++)
    {
        cout << val[i] << " ";
    }

    cout << '\n';
    cout << "Which operation do you want (type search/insert/remove) ? ";
    cin >> choice;

    if(choice == "search")
    {
        search(val, valSize);
    }
    else if(choice == "insert")
    {
        insert(val, valSize);
    }
    else if(choice == "remove")
    {
        remove(val, valSize);
    }
    else
    {
        cout << choice << " isn't a valid option.";
    }
    
    return 0;
}


