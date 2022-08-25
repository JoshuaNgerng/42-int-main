# include <unistd.h>

void	ft_putchar(char c);

int main(int argc, char *argv[])
{
	char	c;
	c = *argv[1];
	
	ft_putchar(c);
	return (0);
}
