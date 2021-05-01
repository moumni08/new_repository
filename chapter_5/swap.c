#include<stdio.h>
void swap(void *v, int i, int j)
{
	void *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
int	main(void)
{
	float tab[5] = {5.6, 5.8, 9.7, 66.3, 44.1};
	swap(tab,0,4);
	printf("%f",tab[0]);
	printf("\n%f",tab[4]);
}
