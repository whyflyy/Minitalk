#include "libft/libft.h"

int	main(void)
{
	/*int		res = 0;
	char	c = 'x';
	char	str[] = "UwU OwO";
	int		n = 42;
	int		i = -123;
    int		*ptr = &i;
	
	res += ft_printf("AwA\n");
	res += ft_printf("Char: %c\n", c);
	res += ft_printf("String: %s\n", str);
    res += ft_printf("Pointer: %p\n", ptr);
	res += ft_printf("Decimal: %d\n", n);
	res += ft_printf("Int: %i\n", i);
	res += ft_printf("Unsigned: %u\n", n);
	res += ft_printf("Hexa lowercase: %x\n", n);
	res += ft_printf("Hexa uppercase: %X\n", i);
	res += ft_printf("Percent: %%\n");
	ft_printf("Res: %d\n", res);
	ft_printf("%u", ft_strlen(str));*/
	ft_printf("PID: %d", getpid());

	return (0);
}
