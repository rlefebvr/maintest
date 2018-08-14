/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestex01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 11:20:39 by rlefebvr          #+#    #+#             */
/*   Updated: 2018/08/14 12:31:06 by rlefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main()
{
	int	nb = -4;
	printf("%d", ft_recursive_factorial(nb));
}
