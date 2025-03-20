#include <stdio.h>

#include "header.h"
float yearCost(int init, int fixed, float tax){
	float total=0;
	total+=fixed;
	total+=tax*init;
	return total;
}