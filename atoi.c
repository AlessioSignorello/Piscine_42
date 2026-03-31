#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr;

	if (nb == -2147483648)
	{	write(1, "-2147483648", 11);
		return ;
	}
	if ( nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10); 
	nbr = (nb % 10) + '0';
	write(1, &nbr, 1);
}

int	ft_atoi(char *str)

{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while(*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while(*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return(result * sign);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	
		i++;
	return (i);
	
}
int	main(void)
{
	char	*str;
	int	result;
	
	str = "4585 i 74738";
	result = ft_atoi(str);
	ft_putnbr(result);
	return (0);
}

