/* Some functions to print out
* what the termios structure is
* set to. */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

void print_c_iflag(struct termios *t)
{
    printf("\nc_iflag settings...\n");

    t->c_iflag & IGNBRK ? printf("IGNBRK: Set\n") : printf("IGNBRK: Unset\n");
    t->c_iflag & BRKINT ? printf("BRKINT: Set\n") : printf("BRKINT: Unset\n");
    t->c_iflag & IGNPAR ? printf("IGNPAR: Set\n") : printf("IGNPAR: Unset\n");
    t->c_iflag & PARMRK ? printf("PARMRK: Set\n") : printf("PARMRK: Unset\n");
    t->c_iflag & INPCK ? printf("INPCK: Set\n") : printf("INPCK: Unset\n");
    t->c_iflag & ISTRIP ? printf("ISTRIP: Set\n") : printf("ISTRIP: Unset\n");
    t->c_iflag & INLCR ? printf("INLCR: Set\n") : printf("INLCR: Unset\n");
    t->c_iflag & IGNCR ? printf("IGNCR: Set\n") : printf("IGNCR: Unset\n");
    t->c_iflag & ICRNL ? printf("ICRNL: Set\n") : printf("ICRNL: Unset\n");
    t->c_iflag & IUCLC ? printf("IUCLC: Set\n") : printf("IUCLC: Unset\n");
    t->c_iflag & IXON ? printf("IXON: Set\n") : printf("IXON: Unset\n");
    t->c_iflag & IXANY ? printf("IXANY: Set\n") : printf("IXANY: Unset\n");
    t->c_iflag & IXOFF ? printf("IXOFF: Set\n") : printf("IXOFF: Unset\n");
    t->c_iflag & IMAXBEL ? printf("IMAXBEL: Set\n") : printf("IMAXBEL: Unset\n");
    t->c_iflag & IUTF8 ? printf("IUTF8: Set\n") : printf("IUTF8: Unset\n");

    return;
}

void print_c_oflag(struct termios *t)
{
    printf("\nc_oflag settings...\n");

    t->c_oflag & OPOST ? printf("OPOST: Set\n") : printf("OPOST: Unset\n");
    t->c_oflag & OLCUC ? printf("OLCUC: Set\n") : printf("OSCUC: Unset\n");
    t->c_oflag & ONLCR ? printf("ONLCR: Set\n") : printf("ONLCR: Unset\n");
    t->c_oflag & OCRNL ? printf("OCRNL: Set\n") : printf("OCRNL: Unset\n");
    t->c_oflag & ONOCR ? printf("ONOCR: Set\n") : printf("ONOCR: Unset\n");
    t->c_oflag & ONLRET ? printf("ONLRET: Set\n") : printf("ONLRET: Unset\n");
    t->c_oflag & OFILL ? printf("OFILL: Set\n") : printf("OFILL: Unset\n");
    t->c_oflag & OFDEL ? printf("OFDEL: Set\n") : printf("OFDEL: Unset\n");

    #if defined __USE_MISC || defined __USE_XOPEN
    t->c_oflag & NLDLY ? printf("NLDLY: Set\n") : printf("NLDLY: Unset\n");
    t->c_oflag & NL0 ? printf("NL0: Set\n") : printf("NL0: Unset\n");
    t->c_oflag & NL1 ? printf("NL1: Set\n") : printf("NL1: Unset\n");
    t->c_oflag & CRDLY ? printf("CRDLY: Set\n") : printf("CRDLY: Unset\n");
    t->c_oflag & CR0 ? printf("CR0: Set\n") : printf("CR0: Unset\n");
    t->c_oflag & CR1 ? printf("CR1: Set\n") : printf("CR1: Unset\n");
    t->c_oflag & CR2 ? printf("CR2: Set\n") : printf("CR2: Unset\n");
    t->c_oflag & CR3 ? printf("CR3: Set\n") : printf("CR3: Unset\n");
    t->c_oflag & TABDLY ? printf("TABDLY: Set\n") : printf("TABDLY: Unset\n");
    t->c_oflag & TAB0 ? printf("TAB0: Set\n") : printf("TAB0: Unset\n");
    t->c_oflag & TAB1 ? printf("TAB1: Set\n") : printf("TAB1: Unset\n");
    t->c_oflag & TAB2 ? printf("TAB2: Set\n") : printf("TAB2: Unset\n");
    t->c_oflag & TAB3 ? printf("TAB3: Set\n") : printf("TAB3: Unset\n");
    t->c_oflag & BSDLY ? printf("BSDLY: Set\n") : printf("BSDLY: Unset\n");
    t->c_oflag & BS0 ? printf("BS0: Set\n") : printf("BS0: Unset\n");
    t->c_oflag & BS1 ? printf("BS1: Set\n") : printf("BS1: Unset\n");
    t->c_oflag & FFDLY ? printf("FFDLY: Set\n") : printf("FFDLY: Unset\n");
    t->c_oflag & FF0 ? printf("FF0: Set\n") : printf("FF0: Unset\n");
    t->c_oflag & FF1 ? printf("FF1: Set\n") : printf("FF1: Unset\n");
    #endif

    t->c_oflag & VTDLY ? printf("VTDLY: Set\n") : printf("VTDLY: Unset\n");
    t->c_oflag & VT0 ? printf("VT0: Set\n") : printf("VT0: Unset\n");
    t->c_oflag & VT1 ? printf("VT1: Set\n") : printf("VT1: Unset\n");

    #ifdef __USE_MISC
    t->c_oflag & XTABS ? printf("XTABS: Set\n") : printf("XTABS: Unset\n");
    #endif

    return;
}

void print_c_cflag(struct termios *t)
{
    printf("\nc_cflag settings...\n");

    #ifdef __USE_MISC
    t->c_cflag & CBAUD ? printf("CBAUD: Set\n") : printf("CBAUD: Unset\n");
    #endif

    t->c_cflag & B0 ? printf("B0: Set\n") : printf("B0: Unset\n");
    t->c_cflag & B50 ? printf("B50: Set\n") : printf("B50: Unset\n");
    t->c_cflag & B75 ? printf("B75: Set\n") : printf("B75: Unset\n");
    t->c_cflag & B110 ? printf("B110: Set\n") : printf("B110: Unset\n");
    t->c_cflag & B134 ? printf("B134: Set\n") : printf("B134: Unset\n");
    t->c_cflag & B150 ? printf("B150: Set\n") : printf("B150: Unset\n");
    t->c_cflag & B200 ? printf("B200: Set\n") : printf("B200: Unset\n");
    t->c_cflag & B300 ? printf("B300: Set\n") : printf("B300: Unset\n");
    t->c_cflag & B600 ? printf("B600: Set\n") : printf("B600: Unset\n");
    t->c_cflag & B1200 ? printf("B1200: Set\n") : printf("B1200: Unset\n");
    t->c_cflag & B1800 ? printf("B1800: Set\n") : printf("B1800: Unset\n");
    t->c_cflag & B2400 ? printf("B2400: Set\n") : printf("B2400: Unset\n");
    t->c_cflag & B4800 ? printf("B4800: Set\n") : printf("B4800: Unset\n");
    t->c_cflag & B9600 ? printf("B9600: Set\n") : printf("B9600: Unset\n");
    t->c_cflag & B19200 ? printf("B19200: Set\n") : printf("B19200: Unset\n");
    t->c_cflag & B38400 ? printf("B38400: Set\n") : printf("B38400: Unset\n");

    #ifdef __USE_MISC
    t->c_cflag & EXTA ? printf("B19200: Set\n") : printf("B19200: Unset\n");
    t->c_cflag & EXTA ? printf("B38400: Set\n") : printf("B38400: Unset\n");
    #endif

    t->c_cflag & CSIZE ? printf("CSIZE: Set\n") : printf("CSIZE: Unset\n");
    t->c_cflag & CS5 ? printf("CS5: Set\n") : printf("CS5: Unset\n");
    t->c_cflag & CS6 ? printf("CS6: Set\n") : printf("CS6: Unset\n");
    t->c_cflag & CS7 ? printf("CS7: Set\n") : printf("CS7: Unset\n");
    t->c_cflag & CS8 ? printf("CS8: Set\n") : printf("CS8: Unset\n");
    t->c_cflag & CSTOPB ? printf("CSTOPB: Set\n") : printf("CSTOPB: Unset\n");
    t->c_cflag & CREAD ? printf("CREAD: Set\n") : printf("CREAD: Unset\n");
    t->c_cflag & PARENB ? printf("PARENB: Set\n") : printf("PARENB: Unset\n");
    t->c_cflag & PARODD ? printf("PARODD: Set\n") : printf("PARODD: Unset\n");
    t->c_cflag & HUPCL ? printf("HUPCL: Set\n") : printf("HUPCL: Unset\n");
    t->c_cflag & CLOCAL ? printf("CLOCAL: Set\n") : printf("CLOCAL: Unset\n");

    #ifdef __USE_MISC
    t->c_cflag & CBAUDEX ? printf("CBAUDEX: Set\n") : printf("CBAUDEX: Unset\n");
    #endif

    t->c_cflag & B57600 ? printf("B57600: Set\n") : printf("B57600: Unset\n");
    t->c_cflag & B115200 ? printf("B115200: Set\n") : printf("B115200: Unset\n");
    t->c_cflag & B230400 ? printf("B230400: Set\n") : printf("B230400: Unset\n");
    t->c_cflag & B460800 ? printf("B460800: Set\n") : printf("B460800: Unset\n");
    t->c_cflag & B500000 ? printf("B500000: Set\n") : printf("B500000: Unset\n");
    t->c_cflag & B576000 ? printf("B576000: Set\n") : printf("B576000: Unset\n");
    t->c_cflag & B921600 ? printf("B921600: Set\n") : printf("B921600: Unset\n");
    t->c_cflag & B1000000 ? printf("B1000000: Set\n") : printf("B1000000: Unset\n");
    t->c_cflag & B1152000 ? printf("B1152000: Set\n") : printf("B1152000: Unset\n");
    t->c_cflag & B1500000 ? printf("B1500000: Set\n") : printf("B1500000: Unset\n");
    t->c_cflag & B2000000 ? printf("B2000000: Set\n") : printf("B2000000: Unset\n");
    t->c_cflag & B2500000 ? printf("B2500000: Set\n") : printf("B2500000: Unset\n");
    t->c_cflag & B3000000 ? printf("B3000000: Set\n") : printf("B3000000: Unset\n");
    t->c_cflag & B3500000 ? printf("B3500000: Set\n") : printf("B3500000: Unset\n");
    t->c_cflag & B4000000 ? printf("B4000000: Set\n") : printf("B4000000: Unset\n");
    t->c_cflag & __MAX_BAUD ? printf("__MAX_BAUD: Set\n") : printf("__MAX_BAUD: Unset\n");

    #ifdef __USE_MISC
    t->c_cflag & CIBAUD ? printf("CIBAUD: Set\n") : printf("CIBAUD: Unset\n");
    t->c_cflag & CMSPAR ? printf("CMSPAR: Set\n") : printf("CMSPAR: Unset\n");
    t->c_cflag & CRTSCTS ? printf("CRTSCTS: Set\n") : printf("CRTSCTS: Unset\n");
    #endif

    return;
}

void print_c_lflag(struct termios *t)
{
    printf("\nc_lflag settings...\n");

    t->c_lflag & ISIG ? printf("ISIG: Set\n") : printf("ISIG: Unset\n");
    t->c_lflag & ICANON ? printf("ICANON: Set\n") : printf("ICANON: Unset\n");

    #if defined __USE_MISC || defined __USE_XOPEN
    t->c_lflag & XCASE ? printf("XCASE: Set\n") : printf("XCASE: Unset\n");
    #endif

    t->c_lflag & ECHO ? printf("ECHO: Set\n") : printf("ECHO: Unset\n");
    t->c_lflag & ECHOE ? printf("ECHOE: Set\n") : printf("ECHOE: Unset\n");
    t->c_lflag & ECHOK ? printf("ECHOK: Set\n") : printf("ECHOK: Unset\n");
    t->c_lflag & ECHONL ? printf("ECHONL: Set\n") : printf("ECHONL: Unset\n");
    t->c_lflag & NOFLSH ? printf("NOFLSH: Set\n") : printf("NOFLSH: Unset\n");
    t->c_lflag & TOSTOP ? printf("TOSTOP: Set\n") : printf("TOSTOP: Unset\n");

    #ifdef __USE_MISC
    t->c_lflag & ECHOCTL ? printf("ECHOCTL: Set\n") : printf("ECHOCTL: Unset\n");
    t->c_lflag & ECHOPRT ? printf("ECHOPRT: Set\n") : printf("ECHOPRT: Unset\n");
    t->c_lflag & ECHOKE ? printf("ECHOKE: Set\n") : printf("ECHOKE: Unset\n");
    t->c_lflag & FLUSHO ? printf("FLUSHO: Set\n") : printf("FLUSHO: Unset\n");
    t->c_lflag & PENDIN ? printf("PENDIN: Set\n") : printf("PENDIN: Unset\n");
    #endif

    t->c_lflag & IEXTEN ? printf("IEXTEN: Set\n") : printf("IEXTEN: Unset\n");

    #ifdef __USE_BSD
    t->c_lflag & EXTPROC ? printf("EXTPROC: Set\n") : printf("EXTPROC: Unset\n");
    #endif

    return;
}
