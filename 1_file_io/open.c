#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd;
	fd = open("file2.txt", O_WRONLY, S_IRUSR|S_IWUSR);
	//printf("%d", fd);
	write(fd, "hello", 7);
	close(fd);


}
