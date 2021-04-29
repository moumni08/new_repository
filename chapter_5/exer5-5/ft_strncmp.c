#include<stdio.h>
int	ft_strncmp(char *s, char *t, int n)
{
	while(*s && *t && n-- > 0)
	{
		if(*s == *t)
		{
			s++;
			t++;
		}

	}
	return(*s - *t);
}
int	main(void)
{
	char tab[10] = "mohamed";
	char tab2[10] = "mohz";
	int i;
	i = ft_strncmp(tab,tab2,2);
	printf("%d",i);
}
