#include<stdio.h>
#include<stdlib.h>

char data[50], temp;
int key, count;

/* Cipher_Caesar Encryption */
void encryption() 
{
	for (count = 0; data[count] != '\0'; count++) {
		temp = data[count];
		if (temp >= 'a' && temp <= 'z') {
			temp = temp + key;
			if (temp > 'z') {
				temp = temp - 'z' + 'a' - 1;
			}
			data[count] = temp;
		} else if (temp >= 'A' && temp <= 'Z') {
			temp = temp + key;
			if (temp > 'Z') {
				temp = temp - 'Z' + 'A' - 1;
			}
			data[count] = temp;
		}
	}
	printf("Encrypted Message:\t%s\n", data);
}

/* Cipher_Caesar Decryption */
void decryption() 
{
	for (count = 0; data[count] != '\0'; count++) {
		temp = data[count];
		if (temp >= 'a' && temp <= 'z') {
			temp = temp - key;
			if (temp < 'a') {
				temp = temp + 'z' - 'a' + 1;
			}
			data[count] = temp;
		} else if (temp >= 'A' && temp <= 'Z') {
			temp = temp - key;
			if (temp < 'A') {
				temp = temp + 'Z' - 'A' + 1;
			}
			data[count] = temp;
		}
	}
	printf("Decrypted Message:\t%s\n", data);
}

int main()
{
	printf("Enter a String:\t");
	scanf("%[^\n]s", data);

	printf("Enter a Key:\t");
	scanf("%d", &key);

	encryption();
    decryption();

	printf("\n");
	return 0;
}


/* Sample Output:
Enter a String: HACKINCODES                                                                                                                    
Enter a Key:    4                                                                                                                              
Encrypted Message:      LEGOMRGSHIW                                                                                                            
Decrypted Message:      HACKINCODES 
*/ 