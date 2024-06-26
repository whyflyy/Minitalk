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

void    send_message()
{
	
}

int     main(int argc, char **argv)
{
	char    *str;

	if (argc != 3)
	{
		ft_printf("Incorrect usage! It should be: ./client <PID> <Message>");
		return (0);
	}
	str = argv[2];
	send_message(str);
	ft_printf("Look at me Im a beautiful creature");
	return (0);
}
