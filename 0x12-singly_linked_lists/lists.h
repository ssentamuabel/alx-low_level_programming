#ifndef MAIN_H
#define MAIN_H

/* Heaer file */
#include<stdlib.h>
#include<stdio.h>

/* struct */
typedef struct list_t{
	char *str;
	int len;
	struct list_t * next;
} list_t;

size_t print_list(const list_t *h);
#endif
