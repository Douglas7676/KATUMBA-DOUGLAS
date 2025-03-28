#include <stdio.h>
   int main()
{
   int i;
   LOOP:
   if(i<=5){	
   printf("\nenter i: "   );
	scanf("%d", &i);
	i++;
	printf("\n i = %d", i);
	goto LOOP;
   }

    else{
        printf("\nStop");
    }


	return 0;
}