#include <stdio.h>
#include <string.h>
 
int main() {
    char str[301];
    char check, check2;
    int stack[301];
    int count=0;
    scanf("%[^\n]", &str);
    scanf(" %c", &check);
    if (check>=65 && check<=90) {
        check2 = check+32;
    }
    if (check>=97 && check<=122) {
        check2 = check-32;
    }
 
    for (int i=0; i<301; i++) {
        if (str[i]=='\0') {
            break;
        }
        if (str[i] == check|| str[i] == check2) {
            stack[count] = i+1;
            count++;
        }
    }
    if (count>0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, check);
        printf("Position: ");
        for (int i=0; i<count; i++) {
            if (i<count-1) {
                printf("%d, ", stack[i]);
            }
            else {
                printf("%d", stack[i]);
            }
        }
 
    }
    else {
        printf("Not found.");
    }
    return 0;
}