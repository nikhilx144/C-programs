#include <stdio.h>
int main()
{
    int decimal;     
    printf("Enter decimal number: "); 
    scanf("%d", &decimal);

	char reversedDigits[100];
	int i = 0;
	
	while(decimal > 0) {
		
		int r = decimal % 16;
		
		if(r < 10)
			reversedDigits[i] = '0' + r;
		else
			reversedDigits[i] = 'A' + (r - 10);
		
		decimal = decimal / 16;
		i++;
	}
	
	printf("Hexadecimal number: ");
	while (i--) 
    {
		
		printf("%c", reversedDigits[i]);
	}
}