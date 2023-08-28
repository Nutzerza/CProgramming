#include <stdio.h>
#include <string.h>

int main() {
	char str[101], strCpy[101];
	int count=0, count2=0;
	scanf("%[^\n]", &str);
	for (int i=0; i<100; i++) {
		if (str[i]=='\0') {
			break;
		}
		count += 1;
	}
	for (int i=count-1; i>=0; i--) {
		strCpy[count2] = str[i];
		count2++;
	}
	strCpy[count]='\0';
	printf("%s", strCpy);
	return 0;
}