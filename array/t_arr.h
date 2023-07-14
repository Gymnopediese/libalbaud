/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_arr.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/11 20:11:08 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ARR_H
# define T_ARR_H

typedef union u_pointer
{
	char				*arr;
	struct s_arr		*arrays;
	struct s_arr		*strings;
	struct s_arr		*maps;
	void				**voids;
	void				*voidp;
	double				*doubles;
	char				**strings_char;
	char				*chars;
	int					*ints;
	long				*longs;
	long long			*long_longs;
	float				*floats;
	short				*shorts;
	unsigned int		*uints;
	unsigned long		*ulongs;
	unsigned long long	*ulong_longs;
	unsigned short		*ushorts;
	unsigned char		*uchars;

}	t_pointer;


typedef struct s_arr
{
	union
	{
		char				*arr;
		struct s_arr		*arrays;
		struct s_arr		*strings;
		struct s_arr		*maps;
		void				**voids;
		void				*voidp;
		double				*doubles;
		char				**strings_char;
		char				*chars;
		int					*ints;
		long				*longs;
		long long			*long_longs;
		float				*floats;
		short				*shorts;
		unsigned int		*uints;
		unsigned long		*ulongs;
		unsigned long long	*ulong_longs;
		unsigned short		*ushorts;
		unsigned char		*uchars;

	};
	unsigned long	s_arr;
	unsigned long	size;
	unsigned long	capacity;
}	t_arr;

#endif