int	main(int argc, char **argv)
{
	t_list *tmp;
	t_list **rec;
	t_list *swap;
	t_list **stack;
	tmp = 0;
	int i;
	int j = 0;
	int c[argc];
	int count = 0;
	i = 1;
	c[argc - 1] = '\0';
	stack = malloc(sizeof(t_list *));
	stack[0] = NULL;
	rec= malloc(sizeof(t_list *));
	rec[0] = NULL;
	while(j++ < argc - 1)
		ft_lstadd_back(stack, ft_lstnew(ft_atoi(argv[i++]), count++));
	tmp = *stack;
	while (tmp)
	{
	    printf("%d", tmp->nbr);
	    printf("_%d ", tmp->index);
	    tmp = tmp->next;
	}
	sort_4(stack, rec);
	tmp = *stack;
	while (tmp)
	{
	    printf("%d", tmp->nbr);
	    printf("_%d ", tmp->index);
	    tmp = tmp->next;
	}
	return 0;
}
