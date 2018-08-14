/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestex02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:11:14 by rlefebvr          #+#    #+#             */
/*   Updated: 2018/08/14 17:13:16 by rlefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int main()
{
	int tab[] = {5,6,8,4,3,0,7};
	int i = 0;
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_integer_table(tab, 7);
	i = 0;
	while (i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
