/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/

#include <stdio.h>

int main(void)
{
    int n;
   int numbers[]={20,500,10,5,100,1,50};

    printf("what number are u searching for?\n");
    scanf("%d",&n);

    for(int i=0;i<7;i++)
    {
        if(n==numbers[i])
        {
            printf("Found number %d\n",numbers[i]);
        }

    }


    return 0;
}