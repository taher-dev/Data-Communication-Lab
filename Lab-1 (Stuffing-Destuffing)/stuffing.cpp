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
        int i = 0;     // For arr
        int j = 1;     // For result
        result[0] = 0; // Starting flag
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
                    result[j] = 0;
                    ++j;
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
        result[j] = 0; // Ending flag
        cout << "After Stuffing:\n";
        for (i = 0; i <= j; i++)
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