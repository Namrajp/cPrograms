#include <stdio.h>
int sort(int x[], int y);

int main(void) 
{
    int m[] =  {2,3,5,6,8,1,4,7};
    sort(m,8);
    for (int i = 0; i < 8; i++)
    {
        printf(" %d", m[i]);
    }
    printf("\n");
    return 0;
}

int sort (int s[], int n)
{
    int i, j, temp, gap;

    for (gap = n/2; gap > 0; gap = gap /2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && s[j] > s[j+ gap]; j = j - gap)
            {
                temp = s[j];
                s[j] = s[j + gap];
                s[j + gap] = temp;
            }
}

// shell sort {2,3,5,6,8,1,4,7} -- gap 4 , 2, 1 - n = 8
// gap -->> swap(a, b); (0,4) -> (2,8)
// void swap (int x, int y) -> (1,5) -> (3, 1)
//{                        -> 2,6 -> (5,4) so on 
//     int temp;
                        //  --- gap 2, (0,2,4,6), (1,3,5,7) swap
//     temp = x;
//     x = y;
//     y = temp;
// }