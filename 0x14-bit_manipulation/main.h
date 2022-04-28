#ifndef MAIN_H
#define MAIN_H
/**
 * binary_to_uint - singly linked list
 * @b: character pointing to a string
 *
 * Description: Write a function that converts a binary
 * number to an unsigned int
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
