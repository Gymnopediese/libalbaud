/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_arg_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:16:32 by albaud            #+#    #+#             */
/*   Updated: 2023/07/07 17:21:13 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

char	*va_arg_len0(va_list *l, size_t len);
char	*va_arg_len1(va_list *l, size_t len);
char	*va_arg_len2(va_list *l, size_t len);
char	*va_arg_len3(va_list *l, size_t len);
char	*va_arg_len4(va_list *l, size_t len);

char	*va_arg_len(va_list *l, size_t len)
{
	static char	res[VA_ARG_MAX_ELEM][244];
	static int	c = -1;
	char		*t;

	if (len >= 244)
		error("element to big to fit in an array");
	c = (c + 1) % VA_ARG_MAX_ELEM;
	t = va_arg_len0(l, len);
	memcpy(res[c], t, len);
	res[c][len] = 0;
	return (res[c]);
}

char	*va_arg_len0(va_list *l, size_t len)
{
	if (len < 8)
		return (va_arg(*l, char [4]));
	if (len < 12)
		return (va_arg(*l, char [8]));
	if (len < 16)
		return (va_arg(*l, char [12]));
	if (len < 20)
		return (va_arg(*l, char [16]));
	if (len < 24)
		return (va_arg(*l, char [20]));
	if (len < 28)
		return (va_arg(*l, char [24]));
	if (len < 32)
		return (va_arg(*l, char [28]));
	if (len < 36)
		return (va_arg(*l, char [32]));
	if (len < 40)
		return (va_arg(*l, char [36]));
	if (len < 44)
		return (va_arg(*l, char [40]));
	if (len < 48)
		return (va_arg(*l, char [44]));
	return (va_arg_len1(l, len));
}

char	*va_arg_len1(va_list *l, size_t len)
{
	if (len < 52)
		return (va_arg(*l, char [48]));
	if (len < 56)
		return (va_arg(*l, char [52]));
	if (len < 60)
		return (va_arg(*l, char [56]));
	if (len < 64)
		return (va_arg(*l, char [60]));
	if (len < 68)
		return (va_arg(*l, char [64]));
	if (len < 72)
		return (va_arg(*l, char [68]));
	if (len < 76)
		return (va_arg(*l, char [72]));
	if (len < 80)
		return (va_arg(*l, char [76]));
	if (len < 84)
		return (va_arg(*l, char [80]));
	if (len < 88)
		return (va_arg(*l, char [84]));
	if (len < 92)
		return (va_arg(*l, char [88]));
	if (len < 96)
		return (va_arg(*l, char [92]));
	return (va_arg_len2(l, len));
}

char	*va_arg_len2(va_list *l, size_t len)
{
	if (len < 100)
		return (va_arg(*l, char [96]));
	if (len < 104)
		return (va_arg(*l, char [100]));
	if (len < 108)
		return (va_arg(*l, char [104]));
	if (len < 112)
		return (va_arg(*l, char [108]));
	if (len < 116)
		return (va_arg(*l, char [112]));
	if (len < 120)
		return (va_arg(*l, char [116]));
	if (len < 124)
		return (va_arg(*l, char [120]));
	if (len < 128)
		return (va_arg(*l, char [124]));
	if (len < 132)
		return (va_arg(*l, char [128]));
	if (len < 136)
		return (va_arg(*l, char [132]));
	if (len < 140)
		return (va_arg(*l, char [136]));
	if (len < 144)
		return (va_arg(*l, char [140]));
	return (va_arg_len3(l, len));
}

char	*va_arg_len3(va_list *l, size_t len)
{
	if (len < 148)
		return (va_arg(*l, char [144]));
	if (len < 152)
		return (va_arg(*l, char [148]));
	if (len < 156)
		return (va_arg(*l, char [152]));
	if (len < 160)
		return (va_arg(*l, char [156]));
	if (len < 164)
		return (va_arg(*l, char [160]));
	if (len < 168)
		return (va_arg(*l, char [164]));
	if (len < 172)
		return (va_arg(*l, char [168]));
	if (len < 176)
		return (va_arg(*l, char [172]));
	if (len < 180)
		return (va_arg(*l, char [176]));
	if (len < 184)
		return (va_arg(*l, char [180]));
	if (len < 188)
		return (va_arg(*l, char [184]));
	if (len < 192)
		return (va_arg(*l, char [188]));
	return (va_arg_len4(l, len));
}

char	*va_arg_len4(va_list *l, size_t len)
{
	if (len < 196)
		return (va_arg(*l, char [192]));
	if (len < 200)
		return (va_arg(*l, char [196]));
	if (len < 204)
		return (va_arg(*l, char [200]));
	if (len < 208)
		return (va_arg(*l, char [204]));
	if (len < 212)
		return (va_arg(*l, char [208]));
	if (len < 216)
		return (va_arg(*l, char [212]));
	if (len < 220)
		return (va_arg(*l, char [216]));
	if (len < 224)
		return (va_arg(*l, char [220]));
	if (len < 228)
		return (va_arg(*l, char [224]));
	if (len < 232)
		return (va_arg(*l, char [228]));
	if (len < 236)
		return (va_arg(*l, char [232]));
	if (len < 240)
		return (va_arg(*l, char [236]));
	return (va_arg(*l, char [240]));
}
