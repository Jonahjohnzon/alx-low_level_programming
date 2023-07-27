#ifndef MAIN_H
#define MAIN_H
/**
 * struct list_s - singly linked
 * @str: string
 * @len: length
 * @next: point
 * Description: singly linke list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
