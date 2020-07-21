#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int fd, dfd, choice, ret;
	const int BUFSZ = 4096;
	char ch, buf[BUFSZ];

	if (argc != 2) {
		printf("Usage: %s <filename>\n", argv[0]);
		return 1;
	}

	while (1) {
		printf("\n\n====================\n");
		printf("Enter your choice\n");

		printf("1. Open the DSF\n");
		printf("2. Close the DSF\n");
		printf("3. Write to the DSF\n");
		printf("4. Read from the DSF\n");
		printf("5. Dup the opened DSF\n");
		printf("6. Close the Duped DSF\n");
		printf("7. Write to the Duped DSF\n");
		printf("8. Read from the Duped DSF\n");
		printf("0. Exit\n");

		scanf("%d", &choice);

		switch(choice) {
			case 0:
				exit(0);

			case 1:
				printf("Going to open(%s)\n", argv[1]);
				scanf("%c", &ch);
				fd = open(argv[1], O_RDWR);
				if (fd<=0) {
					printf("open failed fd:%d errno:%d\n", fd, errno);
					exit(1);
				}
				printf("opened the file\n");
				break;

			case 2:
				printf("Going to close(fd)\n");
				scanf("%c", &ch);
				ret = close(fd);
				if (ret < 0) {
					printf("close(fd) failed\n");
					exit(1);
				}
				printf("closed the file\n");
				fd = -1;
				break;

			case 3:
				printf("Going to write(fd)\n");
				scanf("%c", &ch);
				memset(buf, 0, BUFSZ);
				strncpy(buf, "ff", 2);
				ret = write(fd, buf, 2);
				if (ret != 2) {
					printf("write failed\n");
					exit(1);
				}
				break;

			case 4:
				printf("Going to read(fd)\n");
				scanf("%c", &ch);
				memset(buf, 0, BUFSZ);
				ret = read(fd, buf, 2);
				if (ret != 2) {
					printf("read failed\n");
					exit(1);
				}
				printf("read(fd):%s\n", buf);
				break;

			case 5:
				printf("Going to Dup\n");
				scanf("%c", &ch);
				dfd = dup(fd);
				if (dfd < 0) {
					printf("dup() failed\n");
					exit(1);
				}
				break;

			case 6:
				printf("Going to close Dup\n");
				scanf("%c", &ch);
				ret = close(dfd);
				if (ret < 0) {
					printf("close(dfd) failed\n");
					exit(1);
				}
				break;

			case 7:
				printf("Going to write(dfd)\n");
				scanf("%c", &ch);
				memset(buf, 0, BUFSZ);
				strncpy(buf, "dd", 2);
				ret = write(dfd, buf, 2);
				if (ret != 2) {
					printf("write failed\n");
					exit(1);
				}
				break;

			case 8:
				printf("Going to read(dfd)\n");
				scanf("%c", &ch);
				memset(buf, 0, BUFSZ);
				ret = read(dfd, buf, 2);
				if (ret != 2) {
					printf("read failed\n");
					exit(1);
				}
				printf("read(dfd):%s\n", buf);
				break;

			default:
				break;
		};

	}

	return 0;
}
