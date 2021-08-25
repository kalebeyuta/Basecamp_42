#ifndef LIBUTILS_H
# define LIBUTILS_H

int		ft_str_is_numeric(char *str);
void	ft_swap(int *a, int *b);
int		*custom_atoi(char *str);
int		*ft_malloc_vet(int cols);
int		**ft_malloc(int rows, int cols);

#endif