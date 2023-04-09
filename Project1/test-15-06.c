// 8ÀÏÂ÷
#include <stdio.h>
#include <stdbool.h>

float getArmor() {
	return 20.5;
}

bool hasSlowSkill() {
	return false;
}

int main_test_15_06(void) {
	float armor;
	bool slow;

	armor = getArmor();
	slow = hasSlowSkill();

	printf("%f\n", armor);
	printf("%s\n", slow == true ? "true" : "flase");

	return 0;
}