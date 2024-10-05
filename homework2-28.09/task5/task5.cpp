
#include <stdio.h>

int main() {
    int l1, w1, h1;
    int l2, w2, h2;
    int lc, wc, hc;


    scanf("%d %d %d", &l1, &w1, &h1);
    if (l1 < w1)
    {
        int temp = l1; l1 = w1; w1 = temp;
    }

    scanf("%d %d %d", &l2, &w2, &h2);
    if (l2 < w2)
    {
        int temp = l2; l2 = w2; w2 = temp;
    }

    scanf("%d %d %d", &lc, &wc, &hc);
    if (lc < wc)
    {
        int temp = lc; lc = wc; wc = temp;
    }

    if (h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc)
    {
        printf("YES\n");
    }
    else if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc && h1 <= hc && h2 <= hc)
    {
        if (l1 <= lc && w1 <= wc)
        {
            if ((l2 <= wc - w1 && w2 <= lc) || (w2 <= wc - w1 && l2 <= lc) ||
                (l2 <= lc - l1 && w2 <= wc) || (w2 <= lc - l1 && l2 <= wc))
            {
                printf("YES\n");
            }
            else if (w1 <= lc && l1 <= wc)
            {
                if ((l2 <= wc - l1 && w2 <= lc) || (l2 <= lc && w2 <= wc - l1) ||
                    (l2 <= lc - w1 && w2 <= wc) || (w2 <= lc - w1 && l2 <= wc))
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}