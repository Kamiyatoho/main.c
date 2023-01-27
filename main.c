#include <stdio.h>
struct noeud
{
    int val;
    struct noeud* next;
};

struct list
{
    struct noeud* head;
};

int calcul_Logueur_Chaine(struct noeud k)
{
    int i;
    if (k.next == NULL)
    {
        return 1;
    }
    else
    {
        i = calcul_Logueur_Chaine(*k.next);
        return i + 1;
    }
}

void affiche_Chaine(struct noeud k)
{
    if (k.next == NULL)
    {
        printf("%d\n", k.val);
        printf("Fin \n");
    }
    else
    {
        printf("%d\n", k.val);
        affiche_Chaine(*k.next);
    }
}

void insert_head (struct list *head, struct noeud *new_head)
{
    new_head -> next;
    head -> head;
}

int main()
{
    struct noeud p, q, r,s;
    struct list l;
    int longueur;
    p.val = 12;
    p.next = &q;
    q.val = 13;
    q.next = &r;
    r.val = 14;
    r.next = NULL;
    s.val = 1;
    l.head = &p;
    longueur = calcul_Logueur_Chaine(*l.head);
    printf("%d\n", longueur);
    affiche_Chaine(*l.head);
    insert_head(&l, &s);
    return 0;
}
