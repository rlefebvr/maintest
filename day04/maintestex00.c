/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestex00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:50:20 by rlefebvr          #+#    #+#             */
/*   Updated: 2018/08/14 11:20:15 by rlefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int main()
{
	int	nb;
	
	nb = 4;
	printf("%d", ft_iterative_factorial(nb)); 
	return(0);
}
