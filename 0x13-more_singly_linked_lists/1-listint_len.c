
Skip to content
Pull requests
Issues
Marketplace
Explore
@Samuel2sa
Abenezer-Baheru /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Wiki
Security

    Insights

    alx-low_level_programming/0x13-more_singly_linked_lists/1-listint_len.c
    @Abenezer-Baheru
    Abenezer-Baheru Create 1-listint_len.c
    Latest commit f1acd4b 4 hours ago
    History
    1 contributor
    19 lines (17 sloc) 329 Bytes
#include "lists.h"

    /**
     *  * listint_len - returns the number of elements in a linked listint_t list.
     *   * @h: pointer to the linked list
     *    *
     *     * Return: number of elements in a linked listint_t list
     *      */
    size_t listint_len(const listint_t *h)
{
		size_t count = 0;

			while (h != NULL)
					{
								count++;
										h = h->next;
											}
				return (count);
}
