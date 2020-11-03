#include <iostream>
using namespace std;

float set1[100];
float set2[100];
int n = 0;
int n1 = 0;

float userInput()
{
    cout << "Please enter the length of the first set: " << endl;
    cin >> n;
    cout << "Please enter the length of the second set: " << endl;
    cin >> n1;
    cout << "Please enter the values for the first set: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> set1[i];
    }

    cout << "Please enter the values for the second set: " << endl;
    
    for (int i = 0; i < n1; i++)
    {
        cin >> set2[i];
    }
    
    return *set1;
    return *set2;
  
}
//unite two sets
void unitingSets()
{
    const int n = sizeof(set1) / sizeof(set1[0]);
    const int m = sizeof(set2) / sizeof(set2[0]);
    float set3[n + m];

    for (int i = 0; i < m + n; i++)
    {
        if (i < m)
        {
            set3[i] = set1[i];
        }

        else
        {
            set3[i] = set2[i - m];
        }
    }
    cout << "This are the two united sets: " << endl;
    for (int i = 0; i < m + n; i++)
    {
        cout << set3[i] << " ";
    }

}
//make subset of a set
void subsets()
{
    int count = 0, i = 0;
    int* ptr = &count;
    int* ptr1 = &i;

    if (sizeof(set1) > sizeof(set2))
    {
        int set3(sizeof(set2));

        for (int i = 0; i < sizeof(set1); i++)
        {
            for (int j = 0; j < sizeof(set2); j++)
            {
                if (set1[i] == set2[j])
                {
                    set3[ptr++] = set2[j];
                }
            }
        }

        for (i=0; i < count; i++)
        {
            cout << set3[ptr] << " ";
        }
    }

    else
    {
        int set3(sizeof(set2));

        for (int i = 0; i < sizeof(set2); i++)
        {
            for (int j = 0; j < sizeof(set1); j++)
            {
                if (set2[i] == set1[j])
                {
                    set3[ptr++] = set1[j];
                }
            }
        }

        for (int i = 0; i < count; i++)
        {
            cout << set3[ptr] <<" ";
        }
    }
}
//make the section out of two sets
void section()
{
    int count = 0, i = 0;
    int* ptr = &count;
    int* ptr1 = &i;

    if (sizeof(set1) > sizeof(set2))
    {
        int set3(sizeof(set2));
        for (int i = 0; i < sizeof(set1); i++)
        {
            for (int j = 0; j < sizeof(set2); j++)
            {
                if (set1[i] == set2[j])
                {
                    set3[ptr++] = set2[j];
                }
            }
        }

        for (i = 0; i < count; i++)
        {
            cout << set3[ptr] << " ";
        }
    }

    else
    {
        int set3(sizeof(set2));

        for (int i = 0; i < sizeof(set2); i++)
        {
            for (int j = 0; j < sizeof(set1); j++)
            {
                if (set2[i] == set1[j])
                {
                    set3[ptr++] = set1[j];
                }
            }
        }

        for (int i = 0; i < count; i++)
        {
            cout << set3[ptr] << " ";
        }
    }
}
//make distinction of two sets
void distinction()
{
    int count = 0, i = 0;
    int* ptr = &count;
    int* ptr1 = &i;

    if (sizeof(set1) > sizeof(set2))
    {
        int set3(sizeof(set2));

        for (int i = 0; i < sizeof(set1); i++)
        {
            for (int j = 0; j < sizeof(set2); j++)
            {
                if (set1[i] == set2[j])
                {
                    break;
                }

                set3[ptr++] = set1[i];
            }
        }

        for (i = 0; i < count; i++)
        {
            cout << set3[ptr] << " ";
        }
    }

    else
    {
        int set3(sizeof(set2));

        for (int i = 0; i < sizeof(set2); i++)
        {
            for (int j = 0; j < sizeof(set1); j++)
            {
                if (set1[i] == set2[j])
                {
                    break;
                }

                set3[ptr++] = set2[i];
            }
        }

        for (int i = 0; i < count; i++)
        {
            cout << set3[ptr] << " ";
        }
    }
}
//checking for wrong choice input
bool checkForWrongInput(int n)
{
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input" << endl;
            cin >> n;
        }
        if (!cin.fail())
        {
            break;
        }
    }
    return 1;
}
//the main menu
bool mainMenu()
{
    cout << "Welcome to our Sets Project" << endl;
    cout << "---------------------------" << endl;
    cout << "Please choose an action: " << endl;
    cout << "1. Enter the sets" << endl;
    cout << "2. Uniting sets" << endl;
    cout << "3. Making a subset out of two sets" << endl;
    cout << "4. Making a section out of two sets" << endl;
    cout << "5. Making a distinction out of two sets" << endl;
    cout << "---------------------------" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    checkForWrongInput(choice);
    switch (choice)
    {
    case 1:
        userInput();
        return 1;
        break;

    case 2:
        unitingSets();
        return 1;
        break;

    case 3:
        subsets();
        return 1;
        break;

    case 4:
        section();
        return 1;
        break;

    case 5:
        distinction();
        return 1;
        break;

    default:
        cout << "Try choosing an available option!\n\n";

        return 1;
        break;

    case 9:
        return 0;
    }
    return 1;
}

int main()
{
    mainMenu();
}