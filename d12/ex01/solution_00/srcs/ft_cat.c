/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_cat(int argc, char **argv)		/* Принимаем в 'argc' количество строк, и адресс массива строк в '**argv' */
{
	int	i;									/* Обьявляем счетчик для перемещения по массиву строк */

	g_progname = *argv;						/* Инициализируем глобальный указатель адресом строки хранящей имя и путь самой до програмы */
	i = 0;									/* Инициализируем счетчик */
	while (++i < argc)						/* Увеличиваем счечик 'i' чтоб пропустить число указывающее на строку содержащую имя программы и перейти
											** к след строке. Проверяем услове. Если счетчик 'i' все еще указывает на строку содержащую имя и путь до
											** файла то мы запускаем цикл, который запускает функции печати содержимого этого файла */
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')/* Если текущая строка содержит только символ '-' то печатаем содержимое самого файла программы */
			ft_display_file(g_progname);	/* Отправляем адресс строки, содержащей имя и путь до самой программы, в функцию для печати её содержимого */
		else								/* В другом случае */
			ft_display_file(argv[i]);		/* Отправляем адресс строки, содержащей имя и путь до файла, в функцию для печати его содержимого */
	}
	if (argc == 1)							/* Если массив строк содержит только имя и путь до программы то мы печатаем содержимое только самого файла программы */
		ft_display_file(g_progname);		/* Отправляем адресс строки, содержащей имя и путь до самой программы, в функцию для печати её содержимого */
}