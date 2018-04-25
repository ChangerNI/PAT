/*#include<stdio.h>
#include<stdlib.h>
int main() {
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	int i;
	int temp1 = 0, temp2 = 0, temp3 = 0;
	char s1[100];
	char s2[100];
	char s3[100];
	char s4[100];
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);
	scanf("%s", s4);
	while (s1[count1] != '\0') {
		count1++;
	}
	while (s2[count2] != '\0') {
		count2++;
	}
	while (s3[count3] != '\0') {
		count3++;
	}
	while (s4[count4] != '\0') {
		count4++;
	}
	temp1 = count1 > count2 ? count1 : count2;
	temp2 = count3 > count4 ? count3 : count4;
	for (i = 0; i < temp1; i++) {
		if (s1[i] == s2[i]) {
			if (s1[i] == 'A') {
				printf("MON ");
				s1[i] = s2[i] = '#';
				break;
			}
			if (s1[i] == 'B') {
				printf("TUE ");
				s1[i] = s2[i] = '#';
				break;
			}
			if (s1[i] == 'C') {
				printf("WED ");
				s1[i] = s2[i] = '#';
				break;
			}
			if (s1[i] == 'D') {
				printf("THU ");
				s1[i] = s2[i] = '#';
				break;
			}
			if (s1[i] == 'E') {
				printf("FRI ");
				s1[i] = s2[i] = '#';
				break;
			}
			if (s1[i] == 'F') {
				printf("SAT ");
				s1[i] = s2[i] = '#';
				break;
			}
			if (s1[i] == 'G') {
				printf("SUN ");
				s1[i] = s2[i] = '#';
				break;
			}
		}
	}
	for (i = 0; i < temp1; i++) {
		if (s1[i] == '#') {
			temp3 = i;
		}
	}
	for (i = 0; i < temp1; i++) {
		if (s1[i] == s2[i] && i > temp3) {
			if (s1[i] == '0') {
				printf("00:");
				break;
			}
			if (s1[i] == '1') {
				printf("01:");
				break;
			}
			if (s1[i] == '2') {
				printf("02:");
				break;
			}
			if (s1[i] == '3') {
				printf("03:");
				break;
			}
			if (s1[i] == '4') {
				printf("04:");
				break;
			}
			if (s1[i] == '5') {
				printf("05:");
				break;
			}
			if (s1[i] == '6') {
				printf("06:");
				break;
			}
			if (s1[i] == '7') {
				printf("07:");
				break;
			}
			if (s1[i] == '8') {
				printf("08:");
				break;
			}
			if (s1[i] == '9') {
				printf("09:");
				break;
			}
			if (s1[i] == 'A') {
				printf("10:");
				break;
			}
			if (s1[i] == 'B') {
				printf("11:");
				break;
			}
			if (s1[i] == 'C') {
				printf("12:");
				break;
			}
			if (s1[i] == 'D') {
				printf("13:");
				break;
			}
			if (s1[i] == 'E') {
				printf("14:");
				break;
			}
			if (s1[i] == 'F') {
				printf("15:");
				break;
			}
			if (s1[i] == 'G') {
				printf("16:");
				break;
			}
			if (s1[i] == 'H') {
				printf("17:");
				break;
			}
			if (s1[i] == 'I') {
				printf("18:");
				break;
			}
			if (s1[i] == 'J') {
				printf("19:");
				break;
			}
			if (s1[i] == 'K') {
				printf("20:");
				break;
			}
			if (s1[i] == 'L') {
				printf("21:");
				break;
			}
			if (s1[i] == 'M') {
				printf("22:");
				break;
			}
			if (s1[i] == 'N') {
				printf("23:");
				break;
			}
		}
	}
	for (i = 0; i < temp2; i++) {
		/*if ((s3[i] == s4[i]) && (s3[i] == 'A' || s3[i] == 'B' || s3[i] == 'C' || s3[i] == 'D' || s3[i] == 'E' || s3[i] == 'F' 
			|| s3[i] == 'G' || s3[i] == 'H' || s3[i] == 'I' || s3[i] == 'J' || s3[i] == 'K' || s3[i] == 'L' || s3[i] == 'M' 
			|| s3[i] == 'N' || s3[i] == 'O' || s3[i] == 'P' || s3[i] == 'Q' || s3[i] == 'R' || s3[i] == 'S' || s3[i] == 'T' 
			|| s3[i] == 'U' || s3[i] == 'V' || s3[i] == 'W' || s3[i] == 'X' || s3[i] == 'Y' || s3[i] == 'Z' 
			|| s3[i] == 'a' || s3[i] == 'b' || s3[i] == 'c' || s3[i] == 'd' || s3[i] == 'e' || s3[i] == 'f' || s3[i] == 'g' 
			|| s3[i] == 'h' || s3[i] == 'i' || s3[i] == 'j' || s3[i] == 'k' || s3[i] == 'l' || s3[i] == 'm' || s3[i] == 'n' 
			|| s3[i] == 'o' || s3[i] == 'p' || s3[i] == 'q' || s3[i] == 'r' || s3[i] == 's' || s3[i] == 't' || s3[i] == 'u' 
			|| s3[i] == 'v' || s3[i] == 'w' || s3[i] == 'x' || s3[i] == 'y' || s3[i] == 'z')) {*/
/*		if((s3[i] == s4[i]) && (s3[i] >='a' && s3[i] <= 'z') || (s3[i] >= 'A' && s3[i] <= 'Z')){
			if (i < 10) {
				printf("0%d", i);
				break;
			}
			else {
				printf("%d", i);
				break;
			}
		}
	}
	system("pause");
	return 0;
}*/