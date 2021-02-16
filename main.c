#include <stdio.h>
#include "add.h"

int main(){
	int x, y;
	printf("enter two integer:");
	scanf("%d%d", &x, &y);
	int ans = add(x, y);
	printf("ans:%d\n", ans);
	return 0;
}