#include <stdio.h>

enum Week{
	sun = 1, 
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};

int main(void){
	int day;
	printf(" Input Day (1. sun, 2. mon, 3.tue, 4. wed, 5. thu, 6. fri, 7.sat): ");
	scanf("%d", &day);

	switch(day){
		case sun: 
			printf("SunDay is : %d\n", sun);
			break;
	}
}
