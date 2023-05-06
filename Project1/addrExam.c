/*
	C언어 구조체배열, 포인터, 파일 입출력을 이용한 <<주소록 프로그램>>
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


#define MAX_LANG 30		// 입력받는 정보의 길이 상수
#define MAX_NUM 3		// 주소록 크기 제한 상수

// 구조체 - 사용자의 정보를 저장
typedef struct {
	char name[MAX_LANG];
	char number[MAX_LANG];
} User;

int saveFile(User* ptr, int* num);
int openFile(User* ptr, int* num);
void insert(User* ptr, int* num);
int deleted(User* ptr, int* num);
int search(User* ptr, int* num);
void printAll(User* ptr, int* num);

int main(void) {
	int input;	// 기능 선택
	User user[MAX_NUM];
	int person = 0;

	// 저장된 데이터를 파일로부터 불러오는 함수 호출;
	openFile(user, &person);

	// 메뉴 선택
	while (1) {
		printf("***** Menu *****\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Search\n");
		printf("4. Print All\n");
		printf("5. Save and Exit\n");

		printf("Choose the item : ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("\n[Insert]\n");
			insert(user, &person);
			break;
		case 2:
			printf("\n[Delete]\n");
			deleted(user, &person);
			break;
		case 3:
			printf("\n[Search]\n");
			search(user, &person);
			break;
		case 4:
			printf("\n[Print All]\n");
			printAll(user, &person);
			break;
		case 5:
			saveFile(user, &person);
			return 0;
		default:
			printf("*** Error : Please retry ***\n");
			break;
		}
	}

	return 0;
}

int saveFile(User* ptr, int* num) {
	// 주소록에 등록된 유저 명수가 0보다 클 경우
	if (*num > 0) {
		int i, state;
		FILE* fp = fopen("userInfo.txt", "wt");

		if (fp == NULL) {
			printf("*** Error : file open error ***\n");
			return -1;
		}

		// 구조체 배열에 저장된 데이터를 파일에 저장
		for (i = 0; i < *num; i++) {
			fprintf(fp, "%s %s", ptr[i].name, ptr[i].number);
			fputc('\n', fp);
		}

		state = fclose(fp);
		if (state != 0) {
			printf("*** Error : file close ***\n");
			return -1;
		}

		printf("\n Data Save complete!\n");
		return 0;
	}
	else {
		printf("\n[Exit]\n");
		return 0;
	}
}

int openFile(User* ptr, int* num) {
	int state;
	char temp;
	FILE* fp = fopen("userInfo.txt", "rt");

	if (fp == NULL) {
		printf("*** Error : file open error ***\n");
		return -1;
	}

	// 파일에 저장된 데이터를 구조체 배열에 저장
	while (1) {
		fscanf(fp, "%s %s", ptr[*num].name, ptr[*num].number);
		if (feof(fp) != 0) break;
		(*num)++;	// 다음 유저 정보를 가져오기위해 index 증가
	}
}

// 사용자 정보 입력
void insert(User* ptr, int* num) {
	// 유저 정보가 가득 차지 않은 경우, Insert 가능
	if (*num < MAX_NUM) {
		printf("Input Name : ");
		scanfs("%s", ptr[*num].name);
		printf("Input Number : ");
		scanfs("%s", ptr[*num].number);

		(*num)++;
		printf("Data Inserted\n");
	}
	else {
		printf("*** Error : data full ***\n");
	}
}

int deleted(User* ptr, int* num) {
	return 0;
}

int search(User* ptr, int* num) {
	return 0;
}

void printAll(User* ptr, int* num) {
	int i = 0;

	if (*num > 0) {
		for (i = 0; i < *num; i++) {
			printf("No%d. Name : %s, Tel : %s\n", i+1, ptr[i].name, ptr[i].number);
		}
		printf("Done\n");
	}
	else {
		printf("*** Error : No Data ***\n");
	}
}