#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main() {
	bool b1 = true;
	bool b2 = false;
	printf("% \n", b1 ? "정답" : "틀림");
	printf("%s \n", b2 ? "정답" : "틀림");
	return 0;
}