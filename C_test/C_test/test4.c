#include<stdio.h>
#include<stdlib.h>
int main() {
	int answer = 0;
	for (answer; answer == 1;) {
		printf("1. restart 2.exit ==>");
		scanf("%d", &answer);
	}
	printf("exit");
}