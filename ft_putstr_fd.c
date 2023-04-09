/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carperez <carperez@student.45madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:29:44 by carperez          #+#    #+#             */
/*   Updated: 2023/02/04 18:30:32 by carperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *sPrint, int fDscp)
{
	int	ia;

	ia = 0;
	while (*(sPrint + ia) != '\0')
	{
		ft_putchar_fd(*(sPrint + ia), fDscp);
		ia ++;
	}
}
// Send the string 'sPrint' to the specified file descriptor.
// ft_putchar_fd.c is an embedded functions.