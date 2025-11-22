//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>
enum days { SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
};
typedef struct week{
    enum days day;
}week;

int main(){
    struct week e;
	 e.day=SUNDAY;
    printf("SUNDAY=%d\n",e.day);
    e.day=MONDAY;
    printf("MONDAY=%d\n",e.day);
    e.day=TUESDAY;
    printf("TUESDAY=%d\n",e.day);
    e.day=WEDNESDAY;
    printf("WEDNESDAY=%d\n",e.day);
    e.day=THURSDAY;
    printf("THURSDAY=%d\n",e.day);
    e.day=FRIDAY;
    printf("FRIDAY=%d\n",e.day);
    e.day=SATURDAY;
    printf("SATURDAY=%d\n",e.day);

    return 0;

}