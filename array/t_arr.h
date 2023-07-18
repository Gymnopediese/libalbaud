/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_arr.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:50:45 by albaud            #+#    #+#             */
/*   Updated: 2023/07/17 20:18:38 by albaud           ###   ########.fr       */
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

typedef union u_cpointer
{
	const char					*arr;
	const struct s_arr			*arrays;
	const struct s_arr			*strings;
	const struct s_arr			*maps;
	const void					**voids;
	const void					*voidp;
	const double				*doubles;
	const char					**strings_char;
	const char					*chars;
	const int					*ints;
	const long					*longs;
	const long long				*long_longs;
	const float					*floats;
	const short					*shorts;
	const unsigned int			*uints;
	const unsigned long			*ulongs;
	const unsigned long long	*ulong_longs;
	const unsigned short		*ushorts;
	const unsigned char			*uchars;

}	t_cpointer;

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
		char				*c_str;
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
	union
	{
		unsigned long	s_arr;
		unsigned long	elem_size;
	};
	union
	{
		unsigned long	size;
		unsigned long	length;
		unsigned long	len;
	};
	union
	{
		unsigned long	capacity;
		unsigned long	allocated_space;
	};
}	t_arr;

#endif