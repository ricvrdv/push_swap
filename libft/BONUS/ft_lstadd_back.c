#include "../libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list  *last;

        if (lst == NULL || new == NULL)
                return ;
        if (*lst == NULL)
        {
                *lst = new;
                return ;
        }
        last = *lst;
        while (last->next != NULL)
                last = last->next;
        last->next = new;
}

/*
int   main(void)
{
        t_list  *head = NULL;
        t_list  *current = NULL;
        char    *content_1 = "Added first";
        char    *content_2 = "Added second";
        char    *content_3 = "Added third";
        char    *content_4 = "Added last";

        head = ft_lstnew(content_1);
        current = head;
        current->next = ft_lstnew(content_2);
        current = current->next;
        current->next = ft_lstnew(content_3);
        ft_lstadd_back(&head, ft_lstnew(content_4));
        current = head;
        printf("List:\n");
        while (current)
        {
                printf("\"%s\" -> ", (char *)current->content);
                current = current->next;
                last->next = new;
        }
        printf("NULL\n");
        while (head != NULL)
        {
                current = head;
                head = head->next;
                free(current);
        }
        return (0);
}
*/