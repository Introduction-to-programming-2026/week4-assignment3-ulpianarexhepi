/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/
#include <cs50.h>
#include <stdio.h>
void draw(int n);
void print_row(int n);
int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    print_row(n);

    printf("\n");
}

void print_row(int n)
{
    if (n <= 0)
    {
        return;
    }

    printf("#");
    print_row(n - 1);
}
