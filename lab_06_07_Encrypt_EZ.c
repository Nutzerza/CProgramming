#include <stdio.h>

int main() {
	char check[] = "QRMNCEDKLJOSHTUFVZGWIABXYP";
	char str[201], enStr[201];
	scanf("%[^\n]", &str);
	for (int i=0; i<201; i++) {
		if (str[i]=='\0') {
			enStr[i]='\0';
			break;
		}
		for (int j=0; j<26; j++) {
			if ((str[i]>=65 && str[i]<=90) && str[i] == check[j]) {
                if (j>4) {
                    enStr[i] = check[j-5];
                }
                else {
                    enStr[i] = check[26+(j-5)];
                }
                break;
            }
            if ((str[i]>=97 && str[i]<=122) && str[i]-32 == check[j]) {
                if (j>4) {
                    enStr[i] = check[j-5]+32;
                }
                else {
                    enStr[i] = check[26+(j-5)]+32;
                }
                break;
            }
            if (str[i] == ' ') {
                enStr[i] = str[i];
            }
		}
	}
	printf("%s", enStr);
	return 0;
}