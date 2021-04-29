#include<stdio.h>
char	*ft_strcat(char *s, char *t)
{
	while(*s)
	{
		s++;
	}
	while(*t)
	{
		*s = *t;
		s++;
		t++;
	}
	*s = '\0';
	return(s);
}
int	main(void)
{
	char tab[15] = "mohamed";
	char tab2[7] = "moumni";
	ft_strcat(tab,tab2);
	printf("%s",tab);
}
