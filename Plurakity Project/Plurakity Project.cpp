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

float unitingSets()
{
    int n = sizeof(set1) / sizeof(set1[0]);
    int m = sizeof(set2) / sizeof(set2[0]);
    int k = n + m;

}

float subsets()
{

}

float ownSubsets()
{

}

float equivalentSubsets()
{

}

float essentialSubsets()
{

}

int main()
{
    userInput(); 
}