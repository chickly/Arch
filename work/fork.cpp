#include <iostream>
#include <unistd.h>
#
void ChildProcess() {
    std::cout << "升本是我小弟，soeasy,该进程ID号为：" << getpid() << std::endl;
}
int main() {
    std::cout << "我是嵌入式班的刘振宇,该进程ID号为：" << getpid() << std::endl;
    pid_t pid = fork();
    if (pid == -1) {
        perror("fork error");
    } else if (pid == 0) {
        ChildProcess();
    } else {
        for (int i = 0; i < 2; ++i) {
            std::cout << "花有重开日，人无再少年，id为：" << getpid()
                      << "，父进程id为：" << getppid() << "；" << std::endl;
        }
    }
    return 0;
}
