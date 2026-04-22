/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viteixei <viteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:26:36 by viteixei          #+#    #+#             */
/*   Updated: 2026/04/20 13:30:54 by viteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int i;
	
	i = 0; 
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n )
	{
	dest[i] = '\0';
	i++;
	}	
	return (dest);
}
int		main()
{
    printf("src: %s\n", src);
    printf("dest antes: %s\n", dest);
    ft_strncpy(dest, src, 10);
    printf("dest depois: %s\n", dest);

    return 0;
}


