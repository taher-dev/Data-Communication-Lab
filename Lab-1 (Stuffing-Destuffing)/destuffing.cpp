#include <iostream>

using namespace std;

void destuffing(int arr[], int size)
{
    int result[30];

    if (size < 5)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        int count = 0;
        int i = 1;           // For arr, remove starting flag
        int j = 0;           // For result
        while (i < size - 1) // Remove ending flag
        {
            result[j] = arr[i];
            if (arr[i] == 1)
            {
                ++i;
                ++j;
                ++count;
                if (count == 5)
                {
                    ++i;
                    count = 0;
                }
            }
            else
            {
                ++i;
                ++j;
                count = 0;
            }
        }
        cout << "After Destuffing:\n";
        for (i = 0; i < j; i++)
        {
            cout << result[i] << " ";
        }
    }
}

int main()
{
    cout << "Enter arr size: ";
    int size;
    cin >> size;
    int arr[size];

    cout << "Enter arr: ";
    for (int &x : arr)
    {
        cin >> x;
    }

    destuffing(arr, size);

    return 0;
}