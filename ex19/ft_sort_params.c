/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleticia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:51:31 by mleticia          #+#    #+#             */
/*   Updated: 2019/04/05 15:54:32 by mleticia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] && s2[j])
		j++;
	return (s1[j] - s2[j]);
}

void	ft_putstr(char *str)
{
	int indx;

	indx = 0;
	while (str[indx])
	{
		ft_putchar(str[indx]);
		indx++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				argv[0] = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = argv[0];
				i = 0;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
