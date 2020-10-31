#include <iostream>
using namespace std;

float set1[100];
float set2[100];
int n = 0;
int n1 = 0;

float userInput()
{
   
    cin >> n;
    cin >> n1;
    for (int i = 0; i < n; i++)
    {
        cin >> set1[i];
    }
    for (int i = 0; i < n1; i++)
    {
        cin >> set2[i];
    }
    
    return *set1;
    return *set2;
    return n;
    return n1;
}

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
    for (int i = 0; i < m + n; i++)
    {
        cout << set3[i] << " ";
    }

}

void subsets()
{
    int count = 0,i=0;
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

void section()
{

}

void distinction()
{

}

int main()
{
    userInput();
    subsets();
 
}