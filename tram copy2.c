#include <stdio.h>
int main()
{
    int t,person_present = 0, capacity = 0, person_exit , person_enter;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {

        scanf("%d %d", &person_exit, &person_enter);
        person_present = person_present - person_exit;
        person_present = person_present + person_enter;
        if (person_present > capacity)
        {
            capacity=person_present ;
        }
    }
    printf("%d",capacity);
}
