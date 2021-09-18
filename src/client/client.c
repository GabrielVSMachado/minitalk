/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:44:13 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/09/18 18:44:13 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		exit(EXIT_FAILURE);
	ft_printf(argv[1]);
	return (0);
}
