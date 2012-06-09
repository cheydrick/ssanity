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

    printf("Getting attributes...\n");
    print_c_iflag(&toptions);
    print_c_oflag(&toptions);
    print_c_cflag(&toptions);
    print_c_lflag(&toptions);

    //set options
    if (cfsetispeed(&toptions, B9600) < 0) {printf("error setting input speed\n");}
    if (cfsetospeed(&toptions, B9600) < 0) {printf("error setting output speed\n");}
    toptions.c_cflag &= ~PARENB;
    toptions.c_cflag &= ~CSTOPB;
    toptions.c_cflag &= ~CSIZE;
    toptions.c_cflag |= CS8;

    printf("Setting attributes...\n");
    tcsetattr(porthandle, TCSANOW, &toptions);

    //sanity checks...
    print_c_iflag(&toptions);
    print_c_oflag(&toptions);
    print_c_cflag(&toptions);
    print_c_lflag(&toptions);

    printf("Sanity check real quick...\n");
    printf("CSIZE is %i\n", CSIZE);
    printf("CSIZE inverted is %i\n", ~CSIZE);
    printf("toptions.c_cflag is %i\n", toptions.c_cflag);
    return 0;
}
