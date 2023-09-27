#include "libs.h"

int	main(void)
{
	t_v3	v3;
	t_v2	v2;
	t_v		v;

	v3 = (t_v3){1, 2, 3};
	v2 = (t_v2){1, 2};
	v = (t_v){(double []){1, 2, 3}, 3};
	p_putstruct_fd(&v3, 1);
	p_putstruct_fd(&v2, 1);
	p_putstruct_fd(&v, 1);
	return (0);
}