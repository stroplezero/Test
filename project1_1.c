#include <stdio.h>

int main() {

	char a = -5;
	unsigned char ua = (unsigned char)a;

	if (ua == 250) {
		printf("1의 보수입니다.");
	}

	else if (ua == 251) {
		printf("2의 보수입니다.");
	}

	return 0;
}
