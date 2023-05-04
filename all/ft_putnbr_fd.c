#include "libft.h"

// void ft_putnbr_fd(int n, int fd)
// {
//     char buffer[11];
//     int start;
//     int is_negative;

//     if (n == 0)
//         return ft_putchar_fd('0', fd);
//     is_negative = n < 0;
//     start = 10;
//     while (n != 0)
//     {
//         if (is_negative)
//             buffer[start] = -(n % 10) + '0';
//         else
//             buffer[start] = n % 10 + '0';
//         n /= 10;
//         start--;
//     }
//     if (is_negative)
//     {
//         buffer[start] = '-';
//         start--;
//     }
//     write(fd, buffer + start + 1, 10 - start);
// }

// void ft_putnbr_fd(int n, int fd)
// {
//     int i;
//     long handle;
//     char buff[11];

//     handle = n;
//     if (handle == 0)
//         return ft_putchar_fd('0', fd);
//     if (handle < 0)
//     {
//         handle = handle * (-1);
//         ft_putchar_fd('-', fd);
//     }
//     i = 0;
//     while (handle > 0)
//     {
//         buff[i] = handle % 10 + '0';
//         handle = handle / 10;
//         i++;
//     }
//     i--;
//     while (i >= 0)
//     {
//         ft_putchar_fd(buff[i], fd);
//         i--;
//     }
// }

static void ft_putnbr_fd_recursive(unsigned int n, int fd)
{
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0', fd);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n >= 0)
        return ft_putnbr_fd_recursive(n, fd);

    ft_putchar_fd('-', fd);
    ft_putnbr_fd_recursive(n * -1, fd);
}
