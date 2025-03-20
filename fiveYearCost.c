#include <stdio.h>

#include "header.h"
void fiveYearCost(int init, int fixed, float tax) {
	int i;
	float total=0;
	for(i=5;i>0;i--) {
		total+=yearCost(init,fixed,tax);
	}
	printf("total=%f\n", total);
	return;
}