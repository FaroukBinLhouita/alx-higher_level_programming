#include "list.h"

/**
 * check_cycle - check if there is a cycle or not
 * @list: the varabile
 *
 * Return : 0 succes
 */
int check_cycle(listint_t *list)
{
    listint_t *now, *next;
    if (list == NULL)
    {
        return (0);
    }

    now = list;
    next = list;

    while (now && next && next->next)
    {
        now = now->next;
        next = next->next;
        if (now == next)
        {
            return (1)
        }
    }
    
    if (now != next)
    {
        return (0);
    }
    return (1);
}
