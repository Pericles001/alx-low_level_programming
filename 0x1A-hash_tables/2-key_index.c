#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: Key to be searched for
 * @size: Size of the hash table
 * 
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}