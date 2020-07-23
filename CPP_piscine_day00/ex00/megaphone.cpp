#include <iostream>

int main(int ac, char **av)
{
    int     i;
    int     j;

    j = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    if (ac > 1)
    {
        while (av[j])
        {
            i = 0;
            while (av[j][i])
            {
                if (av[j][i] >= 'a' && av[j][i] <= 'z')
                    std::cout << (av[j][i] &= ~' ');
                else
                    std::cout << (av[j][i]);
                i++;
            }
            j++;
        }
        std::cout << '\n';
    }
    return (0);
}
