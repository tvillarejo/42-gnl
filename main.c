/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:43:56 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/28 11:09:34 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <sys/types.h>
//#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int file, file2, file3;
	int i;
	char	*a;

	i = 0;
	file = open("mifichero.txt", O_RDONLY);
	file2 = open("minifichero.txt", O_RDONLY);
	file3 = open("void.txt", O_RDONLY);
	//a = get_next_line(file2);
	//printf("%s", a);
/*
	// prueba 1
	while (5 > i)
	{
		a = get_next_line(file);
		printf("%d (file 1)-> -%s-\n", i, a);
		a = get_next_line(file2);
		printf("%d(file 2)-> -%s-\n", i, a);
		i++;
	}

	// prueba 2

	while (18 > i)
	{
		a = get_next_line(file);
		printf("%d -> -%s-\n", i, a);
		i++;
	}

	i = 0;

	printf("/-------------------.-.----------------/\n");
*/

	while (15 > i)
	{
		a = get_next_line(file2);
		//printf("\n%d\n", i);
		printf("%d -> -%s-\n", i, a);
		free(a);
		i++;
	}

	system("leaks -q a.out");
	return 0;
}
