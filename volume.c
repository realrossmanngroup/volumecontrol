#include <stdio.h>
#include <stdlib.h>

main()
{
        int c;
        c = 0;
        while ((c = getchar()) != EOF)
        {
                if (c == 'y')
                {
                        int status = system("./volumeup");
                }
                if (c == 'n')
                {
                        int status = system("./volumedown");
                }
        }
}
