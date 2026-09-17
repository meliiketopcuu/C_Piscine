/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtopcu <mtopcu@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:11:06 by mtopcu            #+#    #+#             */
/*   Updated: 2026/09/16 14:02:11 by mtopcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
#include <stdio.h>

int	main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int b;

	ft_rev_int_tab(a, b);
	b = 0;
	while (b < 5)
	{
		printf("%d", a[b]);
		b++;
	}
}