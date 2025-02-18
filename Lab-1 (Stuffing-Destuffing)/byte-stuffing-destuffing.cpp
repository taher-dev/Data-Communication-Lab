#include <iostream>

using namespace std;

void byteDestuffing(char arr[], int size)
{
    char result[30];

    int i = 0; // For arr
    int j = 0; // For result
    while (i < size)
    {
        if (i + 1 < size && ((arr[i + 1] == 'F') || (arr[i] == 'E' && arr[i + 1] == 'E')))
        {
            i++;
        }
        result[j] = arr[i];
        j++;
        i++;
    }
    cout << "After Destuffing:" << endl;
    for (i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

void byteStuffing(char arr[], int size)
{
    char result[30];

    int i = 0; // For arr
    int j = 0; // For result
    while (i < size)
    {
        if (arr[i] == 'F' || arr[i] == 'E')
        {
            result[j] = 'E';
            j++;
            result[j] = arr[i];
            j++;
            i++;
        }
        else
        {

            result[j] = arr[i];
            j++;
            i++;
        }
    }
    cout << "After Stuffing:" << endl;
    for (i = 0; i < j; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    byteDestuffing(result, j);
}

int main()
{
    // 13
    // A B C D E F F E F D F E G
    cout << "\nEnter arr size: ";
    int size;
    cin >> size;
    char arr[size];

    cout << "Enter arr: ";
    for (char &x : arr)
    {
        cin >> x;
    }

    byteStuffing(arr, size);

    return 0;
}