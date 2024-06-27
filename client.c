/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:45:02 by jcavadas          #+#    #+#             */
/*   Updated: 2024/06/26 14:33:21 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void    send_message(char *str, int size)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (i < size)
	{
		x = 8;
		while (x > 0)
		{
			ft_printf("%d", (str[i] >> x) & 1); //--------- NOT WORKINGGGGGGGGG ---------------------------
			//str[i] = str[i] << 1;
			x--;
		}
		i++;
	}
	
}

int     main(int argc, char **argv)
{
	char    *str;
	int		len;

	if (argc != 3)
	{
		ft_printf("Incorrect usage! It should be: ./client <PID> <Message>");
		return (0);
	}
	len = 0;
	str = argv[2];
	len = ft_strlen(str);
	send_message(str, len);
	
	return (0);
}
