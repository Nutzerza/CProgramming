#include <stdio.h>
#include <string.h>
#define stuNameCap 61

int main() {
	char stuList[20][stuNameCap];
	int pos=0;
	char stu[stuNameCap];
	for (int i=0; i<20; i++) {
		scanf(" %[^\n]", &stu);
		strcpy(stuList[i], stu);
	}
	// change
	for (int i=0; i<20; i++) {
		pos = 0;
		for (int j=0; j<stuNameCap; j++) {
			if (stuList[i][j]=='\0') {
				break;
			}
			if (pos==0) {
				if (stuList[i][j]>=97 && stuList[i][j]<=122) {
					stuList[i][j] -= 32;
				}
			}
			else {
				if (stuList[i][j]>=65 && stuList[i][j]<=90) {
					stuList[i][j] += 32;
				}
			}
			pos += 1;
			if (stuList[i][j]==' ') {
				pos = 0;
			}
		}
	}
	// sort
	for (int i=0; i<20; i++) {
		for (int j=0; j<19-i; j++) {
			if (strcmp(stuList[j], stuList[j+1]) > 0) {
				strcpy(stu, stuList[j]);
				strcpy(stuList[j], stuList[j+1]);
				strcpy(stuList[j+1], stu);
			}
		}
	}

	// print
	for (int i=0; i<20; i++) {
		printf("%s\n", stuList[i]);
	}
	return 0;
}
