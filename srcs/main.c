int	main(int argc, char **argv)
{
	t_list *lst;
	t_list *rec;
	t_list *swap;
	lst = 0;
	int i;
	int c[argc];
	int count = 0;
	i = 1;
	c[argc - 1] = '\0';
	while(argv[i])
		ft_lstadd_back(&lst, ft_lstnew(ft_atoi(argv[i++]), count++));
	swap = lst;
	while (lst)
	{
	    printf("%d", lst->nbr);
	    printf("_%d ", lst->index);
	    lst = lst->next;
	}
	sort_3(&swap);
	lst = swap;
	while (lst)
	{
	    printf("%d", lst->nbr);
	    printf("_%d ", lst->index);
	    lst = lst->next;
	}
}
