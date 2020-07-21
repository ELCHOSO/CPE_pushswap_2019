/*
** EPITECH PROJECT, 2019
** task05
** File description:
** my_atoi
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long result = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9') {
        result = result * 10 + str[i] - 48;
        if (2147483648 < result && sign < 0 || 2147483647 < result && sign > 0)
            return (0);
        i++;
    }
    if (result == 2147483648 && sign < 0)
        return (-2147483648);
    return (result * sign);
}
