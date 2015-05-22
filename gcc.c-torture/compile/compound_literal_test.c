static int tab_reinit[];
static int tab_reinit[10];


//int cinit1;
//int cinit1;
int cinit1 = 0;
int *cinit2 = (int []){3, 2, 1};

void compound_literal_test(void)
{
    int *p, i;
    char *q, *q3;

    printf("compound_test:\n");

    p = (int []){1, 2, 3};
    for(i=0;i<3;i++)
        printf(" %d", p[i]);
    printf("\n");

    for(i=0;i<3;i++)
        printf("%d", cinit2[i]);
    printf("\n");

    q = "tralala1";
    printf("q1=%s\n", q);

    q = (char *){ "tralala2" };
    printf("q2=%s\n", q);

    q3 = (char *){ q };
    printf("q3=%s\n", q3);

    q = (char []){ "tralala3" };
    printf("q4=%s\n", q);


    p = (int []){1, 2, cinit1 + 3};
    for(i=0;i<3;i++)
        printf(" %d", p[i]);
    printf("\n");

    for(i=0;i<3;i++) {
        p = (int []){1, 2, 4 + i};
        printf("%d %d %d\n",
               p[0],
               p[1],
               p[2]);
    }

}
