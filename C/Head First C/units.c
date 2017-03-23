#include<stdio.h>

typedef enum {
COUNT,POUNDS,PINTS
} unit_of_measure;

typedef union {
short count;
float weight;
float volume;
}quantity;

typedef struct {
const char *name;
const char *country;
quantity amount;
unit_of_measure units;
}fruit_order;

void display (fruit_order order)
{
	printf("This order contains ");
	if (order.units == PINTS)
		printf("%2.2f pints of %s\n",order.amount.volume,order.name);
	else if(order.units == POUNDS) 
		printf("%2.2f lbs of %s\n",order.amount.weight,order.name);
	else 
		printf("%i %s \n ",order.amount.count,order.name);
}

int main()
{
	fruit_order apples = {"apples","England",.amount.count=144,COUNT};
	fruit_order orange = {"Orange","India",.amount.weight=12.5,POUNDS};
	fruit_order straw = {"Strawberries","INDIA",.amount.volume=123,PINTS};
	puts("--------------------------------------------");
	display(apples);
	puts("--------------------------------------------");
	display(orange);
	puts("--------------------------------------------");
	display(straw);
	puts("--------------------------------------------");

return 0;
}
