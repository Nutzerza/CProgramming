#include <stdio.h>

int main() {
	char fName[31], lName[31];
	int id, day, month, year;
	float GPA;
	scanf("%s", &fName);
	scanf("%s", &lName);
	scanf("%d", &id);
	scanf("%d/%d/%d", &day, &month, &year);
	scanf("%f", &GPA);
	printf("Fullname: %s %s\n", fName, lName);
	printf("ID: %08d\n", id);
	printf("DOB: %02d-%02d-%02d\n", day, month, year);
	printf("GPA: %.2f", GPA);
	return 0;
}