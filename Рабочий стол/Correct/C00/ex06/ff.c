#include <unistd.h>

void	ft_print_comb2(void)
{
	char n1[2];
    char n2[2];

	n1[0] = '0';
    n1[1] = '0';
    n2[0] = '0';
    n2[1] = '0';
	while (n1[0] <= '9')
	{
		while (n1[1] <= '9')
        {
            while (n2[0] <= '9')
            {
                n2[1] = n1[1] + 1;
                while (n2[1] <= '9')
                {
                    write(1, n1, 2);
                    write(1, " ", 1);
                    write(1, n2, 2);
                    write(1, ", ", 2);
                    n2[1]++;
                }
                n2[1] = '0';
                n2[0]++;
            }
            n2[0] = '0';
            n1[1]++;
        }
        n1[1] = '0';
        n2[0]++;
	}
}

int main()
{
    ft_print_comb2();
    return(0);
}