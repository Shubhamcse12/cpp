#include <iostream>
#define max 5
int n, array[max - 1], element, position;
using namespace std;

void Display()
{
    if (n <= 0)
    {
        cout << "First create an array & enter elements into it." << endl;
    }
    else
    {
        cout << "Your entered elements of the array are: \t";
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << "\t";
        }
        cout << endl;
    }
}

void Create()
{
    cout << "Enter the size of the array:";
    cin >> n;
    while (n > max)
    {
        cout << "Enter the size of the array less than or equal to 5 :: \t";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element:";
        cin >> array[i];
    }

    Display();
}

void Insert()
{
    cout << "Enter the position to insert the element :: ";
    cin >> position;

    if (position >= 0 && position <= n)
    {
        cout << "Enter the Element which you want to insert at position " << position << " :: ";
        cin >> element;

        for (int i = n; i > position; i--)
        {
            array[i] = array[i - 1];
        }
        array[position] = element;
        
        Display();
    }
    else
    {
        cout << "Invalid position to insert." << endl;
    }
}

void Delete()
{
    cout << "Enter the position to delete the element :: ";
    cin >> position;

    if (position >= 0 && position < n)
    {
        for (int i = position; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }
        n = n - 1;
        Display();
    }
    else
    {
        cout << "Invalid position to delete." << endl;
    }
}

void Exit()
{
    cout << "Exiting the program." << endl;
    exit(0);
}

int main()
{
    int choice;
    while (1)
    {
        cout << "1. Create" << endl;
        cout << "2. Display" << endl;
        cout << "3. Insert" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;
        cout << "Please choose:";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            Create();
            break;
        case 2:
            Display();
            break;
        case 3:
            Insert();
            break;
        case 4:
            Delete();
            break;
        case 5:
            Exit();
            break;

        default:
            cout << "Enter correct choice" << endl;
            break;
        }
    }

    return 0;
}
