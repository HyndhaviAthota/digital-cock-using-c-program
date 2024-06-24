C program on digital clock
#include <stdio.h>

int main(void)
{
    int morning,h,m,s,i;

    scanf("%02d%02d %02d", &h, &m, &s);

    if (h > 23 || m > 59 || s > 59)
    {
        return 1;
    }
    if (h >= 12)
    {
        morning = 1;

        if (h > 12)
        {
            h -= 12;
        }

    }
    else
    {
        morning = 0;
    }

    
    if (morning == 0)
    {
        printf("%02d:%02d:%02d A.M.",h,m,s);
    }
    else
    {
        printf("%02d:%02d:%02d P.M.",h,m,s);
    }
      start:
	for(h;h<24;h++)
	{
	    for(m;m<60;m++)
	    {
	        for(s;s<60;s++)
	        {
	            printf("\n\n\n\t\t\t%d:%d:%d",h,m,s);
                for(double i=0;i<3619999;i++)
                i++;
                i--;
                	}
                	s=0;
	    }
	    m=0;
	}
	h=0;
	goto start;


    return 0;
}
