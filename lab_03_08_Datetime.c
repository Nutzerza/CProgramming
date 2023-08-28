#include <stdio.h>

int main() {
	int sec, day, hour, min, newSec;
	scanf("%d", &sec);
	day = sec / 86400;
	newSec = sec % 86400;
	hour = newSec / 3600;
	newSec = newSec % 3600;
	min = newSec / 60;
	newSec = newSec % 60;
	printf("%d s = %d d %d h %d m %d s", sec, day, hour, min, newSec);
	return 0;
}