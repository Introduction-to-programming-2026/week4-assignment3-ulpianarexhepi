/*
WEEK 1 — TASK 1 (Iteration)

Goal:
Practice loops and input validation.

Task:
1. Ask the user for a positive integer n.
2. If n < 1, ask again until valid.
3. Print a half-pyramid using # symbols.

Example:
Input: 4

Output:
#
##
###
####

Rules:
- You must use loops (for or while).
- No recursion allowed.
- Output must match exactly.
*/


#include<stdio.h>

void draw(int n);

int main(void)
{
    int n;
    printf("Height:");
    scanf("%d", &n);

    draw(n);
}

void draw(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
