#include "../libft.h"

int     ft_lstsize(t_list *lst)
{
        int     count;

        count = 0;
        while (lst != NULL)
        {
                lst = lst->next;
                count++;
        }
        return (count);
}

/*
int   main(void)
{
        t_list  *head = NULL;
        t_list  *current = NULL;
        int     size;
        int     content_1 = 0;
        int     content_2 = 1;
        int     content_3 = 2;
        int     content_4 = 3;

        head = ft_lstnew(&content_1);
        current = head;
        current->next = ft_lstnew(&content_2);
        current = current->next;
        current->next = ft_lstnew(&content_3);
        current = current->next;
        current->next = ft_lstnew(&content_4);
        size = ft_lstsize(head);
        current = head;
        printf("List of size = %d\n", size);
        while (current)
        {
                printf("%d -> ", *(int *)current->content);
                current = current->next;
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