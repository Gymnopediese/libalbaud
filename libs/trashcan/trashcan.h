/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trashcan.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:00:51 by albaud            #+#    #+#             */
/*   Updated: 2023/07/23 02:09:49 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRASHCAN_H

# define TRASHCAN_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define LOG 0

# define RESET       "\033[0m"

# define SEGFAULT_ERROR 1

// Text color
#define BLACK       "\033[0;30m"
#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define YELLOW      "\033[0;33m"
#define BLUE        "\033[0;34m"
#define MAGENTA     "\033[0;35m"
#define CYAN        "\033[0;36m"
#define WHITE       "\033[0;37m"

// Bold text color
#define BOLD_BLACK       "\033[1;30m"
#define BOLD_RED         "\033[1;31m"
#define BOLD_GREEN       "\033[1;32m"
#define BOLD_YELLOW      "\033[1;33m"
#define BOLD_BLUE        "\033[1;34m"
#define BOLD_MAGENTA     "\033[1;35m"
#define BOLD_CYAN        "\033[1;36m"
#define BOLD_WHITE       "\033[1;37m"

// Background color
#define BG_BLACK       "\033[40m"
#define BG_RED         "\033[41m"
#define BG_GREEN       "\033[42m"
#define BG_YELLOW      "\033[43m"
#define BG_BLUE        "\033[44m"
#define BG_MAGENTA     "\033[45m"
#define BG_CYAN        "\033[46m"
#define BG_WHITE       "\033[47m"


# define ERROR_DATA __FILE__, __LINE__

typedef struct s_n
{
	void		*data;
	size_t		count;
	size_t		size;
	struct s_n	*next;
}	t_nn;

typedef struct s_gb
{
	t_nn	*head;
	t_nn	*tail;
	t_nn	*scope;
	int		size;
}	t_gb;


int		delete(void *to_deletek);
int		delete0(void **to_deletek);
int		deletep(void **to_deletek, size_t size);
void	error(char *text);
void	quit(void);
void	*new(int count, int size);
t_gb	*trashcan(void);
void	add_pointer(void *p, size_t ammount, size_t size);
void	assert(int condition, char *text);

size_t	alloc_count(void *p);
size_t	alloc_length(void *p);
size_t	alloc_size(void *p);
int		is_allocated(void *p);

int		delete_node(t_nn *node);

void	new_scope(void);
void	delete_scope(void *blacklist);
#endif