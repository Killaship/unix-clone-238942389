#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>
#include <stddef.h>

void* memset(void* bufptr, int value, size_t size);
char *strncpy(char *s1, const char *s2, size_t n);
void* memcpy(void* restrict dstptr, const void* restrict srcptr, size_t size);
int strncmp(const char *s1, const char *s2, size_t n);
int memcmp(const void* aptr, const void* bptr, size_t size);
size_t strlen(const char* str);
void* memmove(void* dstptr, const void* srcptr, size_t size);
char* itoa(int i);
int strcmp(const char *s1, const char *s2);
int oct2bin(unsigned char *str, int size);
char read_port(unsigned short port);
void write_port(unsigned short port, unsigned char data);

#endif
