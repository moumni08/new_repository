#include<stdio.h>
int	str_len(char *str)
{
	int length;

	length = 0;
	while(*str != '\0')
	{
		length++;
	}
	return(length);
}
int	ft_strend(char *s, char *t)
{
	int s_len;
	int t_len;
	int i;

	s_len = str_len(s);
	t_len = str_len(t);
	i = 1;
	while(*s != '\0' && i < (s_len - t_len + 1))
	{
		s++;
		i++;
	}
	while(*t != '\0')
	{
		if(*s == *t)
		{
			t++;
			s++;
		}
		else
		{
			return(0);
		}
	}
	return(1);
}
int	main(void)
{
	char tab[10] = "mohamed";
	char tab2[4] = "med";
	int res;
	res = ft_strend(tab,tab2);
	printf("%d",res);
}
