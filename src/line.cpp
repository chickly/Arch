#include <dirent.h>
#include <stdio.h>
#include <cstring>
#include <sys/types.h>
int read_dir(char* filename, int mode, int* pline_num) {
	int ret             = 0;
	char file[256]      = {0};
	char file_path[256] = {0};
	DIR* dir            = opendir(filename);
	char end_file[64]   = {0};
	int n_name          = 0;

	if (!dir) {
		printf("open dir failure\n");
		ret = -1;
		return ret;
	}

	struct dirent* ent = NULL;
	while (ent = readdir(dir)) {
		if (ent->d_type == DT_DIR) {
			if (mode == 1) {
				continue;
			}

			if (!memcmp(ent->d_name, ".", 1) || !memcmp(ent->d_name, "..", 2)) {
				continue;
			}
			sprintf(file_path, "%s/%s", filename, ent->d_name);
			read_dir(file_path, mode, pline_num);
			memset(file_path, 0, sizeof(file_path));

			continue;
		}

		else {
			n_name = get_dot_name(ent->d_name, end_file);

			if (n_name == 1 && (!memcmp(end_file, "c", 1) || !memcmp(end_file, "h", 1))) {
				sprintf(file, "%s/%s", filename, ent->d_name);
				*pline_num += get_line(file);
			}

			memset(end_file, 0, sizeof(end_file));
			memset(file, 0, sizeof(file));
		}
	}
	return ret;
}
