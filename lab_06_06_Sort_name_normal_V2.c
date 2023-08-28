#include <stdio.h>
#include <string.h>
 
char* changeToCapitize(char* name) {
    int i, check=0;
    for (i=0; i<strlen(name); i++) {
        if (check==0) {
            if (name[i]>=97 && name[i]<=122) {
                name[i] -= 32;
            }
        }
        else {
            if (name[i]>=65 && name[i]<=90) {
                name[i] += 32;
            }
        }
        check += 1;
        if (name[i]==' ') {
            check = 0;
        }
    }
    return name;
}
 
int main() {
    char name[20][61];
    char temp[61];
    int sizeArr = 20;
    for (int i=0; i<sizeArr; i++) {
        scanf(" %[^\n]", &name[i]);
    }
     
    for (int i=0; i<sizeArr; i++) {
        strcpy(name[i], changeToCapitize(name[i]));
    }
 
    for (int i=0; i<sizeArr-1; i++) {
        for (int j=0; j<sizeArr-i-1; j++) {
            if (strcmp(name[j], name[j+1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }
 
    for (int i=0; i<sizeArr; i++) {
        printf("%s\n", name[i]);
    }
 
    return 0;   
}