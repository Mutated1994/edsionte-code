/*
 * 使用方法：
 * 1.make编译mycdev.c文件，并插入到内核；
 * 2.通过cat /proc/devices 查看系统中未使用的字符设备主设备号，比如当前231未使用；
 * 3.创建设备文件结点：sudo mknod /dev/mycdev c 231 0；具体使用方法通过man mknod命令查看；
 * 4.修改设备文件权限：sudo chmod 777 /dev/mycdev；
 * 5.以上成功完成后，编译本用户态测试程序；运行该程序查看结果；
 * 6.通过dmesg查看日志信息；
 */


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	int testdev;
	int i, ret;
	char buf[15];

	testdev = open("/dev/mycdev", O_RDWR);

	if (-1 == testdev) {
		printf("cannot open file.\n");
		exit(1);
	}

	if (ret = read(testdev, buf, 15) < 15) {
		printf("read error!\n");
		exit(1);
	}

	printf("%s\n", buf);

	close(testdev);

	return 0;
}
