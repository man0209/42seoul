/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kokim <kokim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:54:18 by kokim             #+#    #+#             */
/*   Updated: 2022/05/31 12:11:36 by kokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//void	info_init(t_info *info, char *file_name)
//{
//	info->mlx = mlx_init();
//}

int	main(int ac, char **av)
{
	t_info	*info;

	if (ac != 2)
		printf("No Map!!\n");
	info = (t_info *)malloc(sizeof(t_info));
	read_map(info, av[1]);
	//info_init(info, av[1]);
	//system("leaks so_long");
	return (0);
}
