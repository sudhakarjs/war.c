    #include <stdio.h>

     

    void main(int argc, char * argv[])

    {

        int i, last = 0, prev = 1, curr, cnt;

        i = atoi(argv[1]);

        printf("Printing first %d fibonacci nos. -> ", i);

        printf("%d ", last);

        printf("%d ", prev);

        cnt = 2;

        while (cnt< = i-1)

        {

            curr = last + prev;

            last = prev;

            prev = curr;

            cnt++;

            printf("%d ", curr);

        }

        printf("\n");

    }

