#include <iostream>
using namespace std;

float set1[100];
float set2[100];

float userInput()
{
    int n,n1;
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

}

void ownSubsets()
{

}

void equivalentSubsets()
{

}

void essentialSubsets()
{

}

int main()
{
    userInput(); 
    unitingSets();
}