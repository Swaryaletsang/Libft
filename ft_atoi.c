
int			ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	if(str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while(str[i] != '\0' && str[i] != '-')
	{
		if(str[i]>= '0' && str[i]<='9')
			nb = (nb *10) +(str[i++] - '0');
		else
			break;;
	}
	return (nb*sign);
}