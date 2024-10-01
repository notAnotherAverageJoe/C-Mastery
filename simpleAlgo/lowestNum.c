#include <stdio.h>

int lowestFinder(int arr[], int len)
{
    int lowest = arr[0]; // Start with the first element as the lowest
    for (int i = 1; i < len; i++)
    {
        if (lowest > arr[i])
        {
            lowest = arr[i]; // Update hgihest if a larger element is found
        }
    }
    return lowest;
}

int main()
{
    int grades[] = {13, 76, 44, 32, 6, 89, 0, 55, 86, 32, 64};
    // This array contains 11 integers.
    // If each int is 4 bytes (which is typical on many systems), sizeof(grades) will return 4 * 11 = 44 bytes.
    int length = sizeof(grades) / sizeof(grades[0]); // Calculate the number of elements in the array

    int lowest = lowestFinder(grades, length);
    printf("The lowest grade is: %d\n", lowest);

    return 0;
}
