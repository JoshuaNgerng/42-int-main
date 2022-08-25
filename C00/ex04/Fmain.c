#include <stdio.h>

void	ft_is_negative(int n);

int main(int argc, char *argv[])
{
	int n;
	char	c;
	char	r;

	c = *argv[0];
	r = c;
	if (r  == '-')
	{
		n = -1;
	}
	else 
	{
		sscanf(*argv, "%d", &n);
	}
	ft_is_negative(n);
	return (0);
}
