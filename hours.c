#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    string activity = get_string("Activity: ");
    int weeks = get_int("Number of weeks participating in %s: ", activity);
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i Hours: ", i);
    }
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    float total = 0;
    for (int i = 0; i < weeks; i++)
    {
        total += hours[i];
    }

    if (output == 'T')
    {
        return total;
    }
    else if (output == 'A')
    {
        return total / weeks;
    }
    else
    {
        return 1;
    }
}
