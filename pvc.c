/* main.c */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int i = 0;
	for (; i < 1000 * 1000 * 100; i++);
	printf("%d - DONE\n", i);
}