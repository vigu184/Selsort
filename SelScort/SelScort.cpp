#include <iostream>
using namespace std;

int main()
{
    int size; //Size of array
    cout << "Enter size :";
    cin >> size;

    int a[100]; //Max size of Array is 100
    cout << "Enter values\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i]; // input array value
    }
    int small, temp;

    /*Selection Sort*/
    for (int i = 0; i < size-1; i++)
    {
        small = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[small] > a[j])
            {
                small = j;
            }
        }
        
        if (small!= i)
        {
            temp = a[small];
            a[small] = a[i];
            a[i] = temp;
        }
    }
    /*Print Sorted Array*/
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

