#include <stdio.h>

	int tal;
    int tal1;
    int tal2;
    int tal3;
    int tal4;
    int sum;

int main(void) {

    printf("Hvor mange tal skal der lægges sammen?\n");
	scanf("%d", &tal); 

    if (tal==2) {
        printf("Indtast første tal\n");
        scanf("%d", &tal1);
        printf("Indtast andet tal\n");
        scanf("%d", &tal2);
        

    }
    if (tal==3) {
        printf("Indtast første tal\n");
        scanf("%d", &tal1);
        printf("Indtast andet tal\n");
        scanf("%d", &tal2);
        printf("Indtast tredje tal\n");
        scanf("%d", &tal3);
    }
    if (tal==4) {
        printf("Indtast første tal\n");
        scanf("%d", &tal1);
        printf("Indtast andet tal\n");
        scanf("%d", &tal2);
        printf("Indtast tredje tal\n");
        scanf("%d", &tal3);
        printf("Indtast fjerde tal\n");
        scanf("%d", &tal4);
    }
    else {
        printf("Indtast gyldygt tal");
        return 0;
    }

    

    sum = tal1 + tal2 + tal3 + tal4;
	printf("summen er %d.\n", sum);

	return 0;
}