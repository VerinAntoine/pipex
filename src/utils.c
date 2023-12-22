/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:40:04 by antoine           #+#    #+#             */
/*   Updated: 2023/12/21 17:50:47 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/**
 * Copies the content of an fd into an another
 * @param in The in file descriptor
 * @param out The out file descriptor
*/
int	fd_copy(int in, int out)
{
	char	*line;

	while (oget_next_line(in, &line))
	{
		ft_dprintf(out, "%s", line);
		free(line);
	}
	return (close(in), close(out), TRUE);
}
