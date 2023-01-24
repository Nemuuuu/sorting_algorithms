#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*principal functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);

/*helper functions*/
int partition(int *array, int lo, int hi, size_t size);
void quick_s(int *array, int lo, int hi, size_t size);
void merge(size_t lo, size_t mi, size_t hi, int *dest, int *src);
void merge_partition(size_t lo, size_t hi, int *array, int *base);
void swap_root(int *array, size_t root, size_t hi, size_t size);
int lomuto_partition(int *array, int start, int end, size_t size);
void lomuto_sort(int *array, int start, int end, size_t size);

#endif /*SORT_H*/
