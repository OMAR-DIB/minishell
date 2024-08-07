/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   art.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourtab <zakariamourtaban@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:22:40 by zmourtab          #+#    #+#             */
/*   Updated: 2024/08/01 11:22:25 by zmourtab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void art(void) {
	printf("\x1b[2J\x1b[H");
    printf( "      ___                       ___                       ___           ___           ___           ___       ___ \n" RESET);
    printf( "     /\\__\\          ___        /\\__\\          ___        /\\  \\         /\\__\\         /\\  \\         /\\__\\     /\\__\\\n" RESET);
    printf( "    /::|  |        /\\  \\      /::|  |        /\\  \\      /::\\  \\       /:/  /        /::\\  \\       /:/  /    /:/  /\n" RESET);
    printf( "   /:|:|  |        \\:\\  \\    /:|:|  |        \\:\\  \\    /:/\\ \\  \\     /:/__/        /:/\\:\\  \\     /:/  /    /:/  / \n" RESET);
    printf( "  /:/|:|__|__      /::\\__\\  /:/|:|  |__      /::\\__\\  _\\:\\~\\ \\  \\   /::\\  \\ ___   /::\\~\\:\\  \\   /:/  /    /:/  /  \n" RESET);
    printf( " /:/ |::::\\__\\  __/:/\\/__/ /:/ |:| /\\__\\  __/:/\\/__/ /\\ \\:\\ \\ \\__\\ /:/\\:\\  /\\__\\ /:/\\:\\ \\:\\__\\ /:/__/    /:/__/   \n" RESET);
    printf( " \\/__/~~/:/  / /\\/:/  /    \\/__|:|/:/  / /\\/:/  /    \\:\\ \\:\\ \\/__/ \\/__\\:\\/:/  / \\:\\~\\:\\ \\/__/ \\:\\  \\    \\:\\  \\   \n" RESET);
    printf( "       /:/  /  \\::/__/         |:/:/  /  \\::/__/      \\:\\ \\:\\__\\        \\::/  /   \\:\\ \\:\\__\\    \\:\\  \\    \\:\\  \\  \n" RESET);
    printf( "      /:/  /    \\:\\__\\         |::/  /    \\:\\__\\       \\:\\/:/  /        /:/  /     \\:\\ \\/__/     \\:\\  \\    \\:\\  \\ \n" RESET);
    printf( "     /:/  /      \\/__/         /:/  /      \\/__/        \\::/  /        /:/  /       \\:\\__\\        \\:\\__\\    \\:\\__\\\n" RESET);
    printf( "     \\/__/                     \\/__/                     \\/__/         \\/__/         \\/__/         \\/__/     \\/__/\n" RESET);
}

