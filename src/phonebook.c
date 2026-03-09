/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/


#include <stdio.h>
#include <string.h>
#include <cs50.h>


typedef struct
{
   string name;
   string phone;
}person;
int main()
{
   person phonebook[5];
   phonebook[0].name="Ana";
   phonebook[0].phone="076123123";

   phonebook[1].name="Amar";
   phonebook[1].phone="076321321";

   phonebook[2].name="David";
   phonebook[2].phone="098765432";

   phonebook[3].name="Tringa";
   phonebook[3].phone="123123";

   phonebook[4].name="Amir";
   phonebook[4].phone="43243243";

   string name=get_string("Search a name:");

   for (int i = 0; i < 5; i++)
   {
      if (strcmp(phonebook[i].name, name) == 0)
      {
         printf("Found %s\n", phonebook[i].phone);
         return 0;
      }
   }

   printf("Not found\n");
   return 1;
}