#include <stdio.h>

int main() {
	char fname1[51], sname1[51], person2[101], person3[101];
	scanf("%s", &fname1);
	scanf("%s", &sname1);
	scanf(" %[^\n]", &person2);
	scanf(" %[^\n]", &person3);
	printf("Person 1: %s %s\n", fname1, sname1);
	printf("Person 2: %s\n", person2);
	printf("Person 3: %s", person3);
	return 0;
}