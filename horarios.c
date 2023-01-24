#include <stdio.h>

int main(){
	int h1, m1, s1, h2, m2, s2, horario1, horario2;
	
	scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);
	
	horario1 = (h1*60 + m1)*60 + s1;
	horario2 = (h2*60 + m2)*60 + s2;
	
	if (horario1 > horario2){
		printf("%d", horario1 - horario2);
	} else{
		printf("%d", horario2 - horario1);
	}
	return 0;
}
