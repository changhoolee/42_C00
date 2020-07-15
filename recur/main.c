#include <stdio.h>

void recur(int depth)
{	
	char a = 'a';
	int i = 0;

	if(depth == 3)
	{
		printf("%c, ", a);
		return ;
	}

	while(i <= 3)
	{
		recur(depth + 1);
		++i;
	}
}

int		main(void)
{
	recur(0);
}
