/*
�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.



    *
   **
  ***
 ****
*****
*/

int main(void) {
    /*
    int x;
    scanf_s("%d", &x);
    int count = x - 1;
    int star = 1;
    for (int i = 0; i < x; i++) {
        for (int j = count; j > 0; j--) {
            printf(" ");
        }
        for (int j = 0; j < star; j++) {
            printf("*");
        }
        count--;
        star++;
        printf("\n");
    }

    printf("\n\n-----\n\n");

    int y;
    scanf_s("%d", &y);
    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < y-i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n\n-----\n\n");
    */

    int diamond;
    scanf_s("%d", &diamond);
    for (int i = 0; i < diamond; i++) {
        for (int j = 0; j < diamond - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < diamond; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < diamond - i; j++) {
            printf("*");
        }
        for (int j = diamond - 1; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}