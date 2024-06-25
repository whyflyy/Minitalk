/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcavadas <jcavadas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:45:02 by jcavadas          #+#    #+#             */
/*   Updated: 2024/06/25 14:19:34 by jcavadas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_printf("Incorrect usage! It should be: ./client <PID> <Message>");
        return (0);
    }
    ft_printf("Look at me Im a beautiful creature");
    return (0);
}
