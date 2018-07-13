#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	char message[] = "Hello world";
	int port = open("/dev/ttyS0", O_RDWR);
	if( port <= 0 ) {
		printf("Port open fail\n");
		return 1;
	}	

	write(port, message, sizeof(message));
	close(port);
	return 0;
}
