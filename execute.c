#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char

int main(void)
{
	char *buffer = NULL, *copy_buffer = NULL;
	ssize_t num_read;
	size_t n = 0;
	char *token;
	char *delim = " \n";
	int sum_tokens = 0, i = 0;
