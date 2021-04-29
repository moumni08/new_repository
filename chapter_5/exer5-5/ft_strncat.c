#include<stdio.h>
char	*ft_strncat(char *s, char *t, int n)
{

	while(*s)
	{
		s++;
	}
	while(*t && i < n)
	{
		*s = *t;
		t++;
		s++;
	}
	*s = '\0';
	return(s);
}
int	main(void)
{
	char tab[10] = "moha";
	char tab2[5] = "med";
	ft_strncat(tab,tab2,3);
	printf("%s",tab);
}
