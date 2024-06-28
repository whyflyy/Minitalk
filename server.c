/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:45:07 by jcavadas          #+#    #+#             */
/*   Updated: 2024/06/28 15:40:47 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler_message(int sig)
{
	static char		c = 0;
	static int		i = 0;

	if (sig == SIGUSR2)
	{
		c = (c << 1) | 1;
		
		//ft_printf("%c", c);
	}
	else
	{
		c = c << 1;
		//ft_printf("%c", c);
	}
	i++;
	if(i == 8)
	{
		ft_printf("%c", c);
		i = 0;
	}
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, handler_message);
		signal(SIGUSR2, handler_message);
	}
}
