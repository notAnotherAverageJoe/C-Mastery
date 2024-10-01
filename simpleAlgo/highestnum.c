#include <stdio.h>

int highestNumber(int arr[], int length)
{
    int highestNum = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (highestNum < arr[i])
        {
            highestNum = arr[i];
        }
    }
    return highestNum;
}

int main()
{
    int grades[] = {33,
                    56,
                    32,
                    12,
                    88,
                    66,
                    44,
                    89,
                    100,
                    53,
                    77,
                    43,
                    99,
                    34,
                    67,
                    89,
                    93};

    int length = sizeof(grades) / sizeof(grades[0]);

    int highest = highestNumber(grades, length);
    printf("The highest grade is: %d\n", highest);
    return 0;
}