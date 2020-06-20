#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    save_president.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#              #
#    Created: 2020/02/14 12:33:14 by evgenkarlson     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#	• Создайте файл save_president.sh, который предотвращает удаление файла    #
#   president.txt                                                              #
#	• Мы добавим «rm -f president.txt» в конце вашего файла.                   #
# **************************************************************************** #


# **************************************************************************** #
# *****************************_РЕШЕНИЕ_************************************** #
# **************************************************************************** #


#!/bin/sh
alias rm="ls"


# **************************************************************************** #
# *****************************_РЕШЕНИЕ_************************************** #
# **************************************************************************** #


alias rm="echo TROP 42 !"


# **************************************************************************** #
# *****************************_РЕШЕНИЕ_************************************** #
# **************************************************************************** #


chmod -R +a "everyone deny delete" president.txt


# **************************************************************************** #
# *****************************_РЕШЕНИЕ_************************************** #
# **************************************************************************** #


rm(){
	chmod 000 president.txt
}


# **************************************************************************** #
# *****************************_РЕШЕНИЕ_************************************** #
# **************************************************************************** #


rm() {
   :
}


# **************************************************************************** #
# **************************************************************************** #
# **************************************************************************** #