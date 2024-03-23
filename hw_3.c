#include <stdio.h>

int main(void) {
	char info_1[3][20] = {" "};
	char info_2[3][20] = { " " };

	int i = 0, j = 0, k = 0;

		printf("학생 1의 이름: ");
		scanf_s("%s", info_1[0],sizeof(info_1[0]));

		printf("학생 1의 학과: ");
		scanf_s("%s", info_1[1],sizeof(info_1[1]));

		printf("학생 1의 학번: ");
		scanf_s("%s", info_1[2], sizeof(info_1[2]));
		printf("\n");
		


		printf("학생 2의 이름: ");
		scanf_s("%s", info_2[0] , sizeof(info_2[0]));

		printf("학생 2의 학과: ");
		scanf_s("%s", info_2[1], sizeof(info_2[1]));

		printf("학생 2의 학번: ");
		scanf_s("%s", info_2[2], sizeof(info_2[2]));
		printf("\n");

		for (i = 0; i <= 1; i++) {
			printf("학생 %d\n", i+1);

			for (j = 0; j <= 2; j++) {

				if (i == 0) {
					for (k = 0; info_1[j][k] != '\0'; k++) {

						
						printf("%c", info_1[j][k]);

						
					}
					printf("\n");
				}

				if (i == 1) {
					for (k = 0; info_2[j][k] != '\0'; k++) {


						printf("%c", info_2[j][k]);


					}
					printf("\n");
				}

				
			}
		}


	return 0;
}