#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	ret_value;
	int				a;

	ret_value = 0;
	a = 0;
	while (a < 7)
	{
		if (octet % 2 == 1)
			ret_value |= 1;
		octet = octet / 2;
		ret_value = ret_value * 2;
		a++;
	}
	if (octet % 2 == 1)
		ret_value |= 1;
	return (ret_value);	
}

int main(void)
{
unsigned char octet = 01101010;
printf("%c", reverse_bits(octet));
return (0);
}
