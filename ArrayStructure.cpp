#include <iostream>
#include <cstdlib>
using namespace std;
class Mycls
{
public:
    int arrayMax(int arr[])
    {
        int sizearay = sizeof(arr) / sizeof(arr[0]);
        int max = arr[0];
        for (int i = 0; i < sizearay; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }
};

class A : public Mycls
{
public:
    int* returnArr(int arr[], int size, int target)
    {
        int n = sizeof(arr)/sizeof(arr[0]);
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; size < n; j++)
            {
                if ((arr[i] + arr[j]) == target)
                {
                    int *result = new int[2];
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return nullptr;
    }
};

int main()
{
    A obj;
    int arrays[] = {1, 2, 3, 4, 5, 66, 7};
    int largest = obj.arrayMax(arrays);
    int* arraa[];
    int n = sizeof(arraa) / sizeof(arraa[0]);
    int* arraa[] = obj.returnArr(arrays, n, 9);
    int sizearr = sizeof(arraa) / sizeof(arraa[0]);
    for (int i = 0; i < sizearr; i++)
    {
        cout << arraa[i] << " ";
    }
    cout << largest;
}