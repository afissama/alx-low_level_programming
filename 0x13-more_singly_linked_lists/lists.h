#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
unsigned long print_listint(const listint_t *h);
unsigned long listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif