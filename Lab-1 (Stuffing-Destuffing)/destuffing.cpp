#include <iostream>

using namespace std;

void stuffing(int arr[], int size)
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
        int i = 0; // For arr
        int j = 0; // For result
        while (i < size)
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

    for (int &x : arr)
    {
        cin >> x;
    }

    stuffing(arr, size);

    return 0;
}