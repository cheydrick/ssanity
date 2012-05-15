#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <termios.h>
#include "ssanity.h"


char *portname = "/dev/ttyACM0"; /*This is what my Aduino serial interface is called*/

int main(int argc, char *argv[])
{
	int porthandle;

	porthandle = open(portname, O_RDWR | O_NOCTTY | O_NDELAY);

	if (porthandle == -1)
		{
			printf("Couldn't open port %s\n", portname);
			return -1;
		}

	struct termios toptions;

    if (tcgetattr(porthandle, &toptions) < 0)
    {
        printf("Couldn't get attributes\n");
        return -1;
    }

    //set options
    cfsetispeed(&toptions, B9600);
    cfsetospeed(&toptions, B9600);
    toptions.c_cflag &= ~PARENB;
    toptions.c_cflag &= ~CSTOPB;
    toptions.c_cflag &= ~CSIZE;
    toptions.c_cflag |= CS8;

    //sanity checks...
    print_c_iflag(&toptions);
    print_c_oflag(&toptions);
    print_c_cflag(&toptions);
    print_c_lflag(&toptions);

return 0;
}
