/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:45:02 by jcavadas          #+#    #+#             */
/*   Updated: 2024/06/28 15:40:08 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_size(int pid, int size)
{
	int	i;

	i = 31;
	while (i >= 0)
	{
		if (size & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
		i--;
	}
}

void	send_message(int pid, char *str, int size)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (i < size)
	{
		x = 7;
		while (x >= 0)
		{
			if((str[i] >> x) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			//str[i] = str[i] << 1;
			x--;
			usleep(50);
		}
		//ft_printf(" ");
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	int		len;
	int		pid;

	if (argc != 3)
	{
		ft_printf("Incorrect usage! It should be: ./client <PID> <Message>");
		return (0);
	}
	len = 0;
	str = argv[2];
	len = ft_strlen(str);
	pid = ft_atoi(argv[1]);
	send_size(pid, len);
	send_message(pid, str, len);

	return (0);
}
