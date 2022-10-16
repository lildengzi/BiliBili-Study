#if(0)
#include<cstdio>
    int main()
    {
        int y, m, n;
        scanf_s("%d %d", &y, &m);
        switch (m)
        {
        case 1:n = 31; break;
        case 2:n = 29; break;
        case 3:n = 31; break;
        case 4:n = 30; break;
        case 5:n = 31; break;
        case 6:n = 30; break;
        case 7:n = 31; break;
        case 8:n = 31; break;
        case 9:n = 30; break;
        case 10:n = 31; break;
        case 11:n = 30; break;
        case 12:n = 31; break;
        default:printf("error");
        }
        if (m == 2)
        {
            if (y % 4 == 0)
            {
                if (0 == y % 100)
                {
                    if (0 == y % 400)
                    {
                        n = 29;
                    }
                    else n = 28;
                }
                else n = 29;
            }
            else n = 28;
        }
        printf("%d", n);
     }
#endif