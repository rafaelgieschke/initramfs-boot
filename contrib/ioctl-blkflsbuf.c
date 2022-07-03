#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/mount.h>

int main(int argc, char *argv[]) {
  ioctl(open(argv[1], O_RDONLY), BLKFLSBUF);
  perror("ioctl(BLKFLSBUF)");
}
