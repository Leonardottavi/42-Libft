/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:23:58 by lottavi           #+#    #+#             */
/*   Updated: 2023/01/24 18:12:32 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	char		*bptr;
	char		*lptr;

	if (!*little)
		return ((char *)big);
	while (len-- && *big)
	{
		if (*big == *little)
		{
			i = len;
			bptr = (char *)big + 1;
			lptr = (char *)little + 1;
			while (i-- && *bptr && *lptr && *lptr == *bptr)
			{
				++lptr;
				++bptr;
			}
			if (*lptr == '\0')
				return ((char *)big);
		}
		++big;
	}
	return (NULL);
}
