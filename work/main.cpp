#include <cstdio>
#include <cstring>

int main() {
	FILE *fp1 = nullptr;
	FILE *fp2 = nullptr;
	char str[] = "a vigor of the emotions";
	char line[1024];
	fp1 = fopen("test.txt", "re");
	fp2 = fopen("lzy.txt", "we");
	while (fgets(line, sizeof(line), fp1)) {
		if (strstr(line, str)) {
			fputs(line, fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}