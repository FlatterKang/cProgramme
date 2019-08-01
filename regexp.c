#include <stdio.h>
#include <regex.h>

int main() {
    char *email = "zhangxiaojing@banyuan.club";
    char *pattern = "^[a-zA-Z0-9_-]+@.+\\.(.+)";
    char errbuf[1024];
    regex_t reg;
    int nm = 10;
    regmatch_t pmatch[nm];
    int err;

    // 1. 编译正则表达式： REG_EXTENDED 使用功能更强大的扩展正则表达式，REG_ICASE 忽略大小写
    if (regcomp(&reg, pattern, REG_EXTENDED | REG_ICASE) < 0) {
        regerror(err, &reg, errbuf, sizeof(errbuf));
        printf("err:%s\n", errbuf);
        return 1;
    }
	// 2. 执行正则表达式
    err = regexec(&reg, email, nm, pmatch, 0);

    if (err) {
        if (err == REG_NOMATCH) {
            printf("用户名不存在，请重试\n");
        } else {
            regerror(err, &reg, errbuf, sizeof(errbuf));
            printf("未知错误: %s\n", errbuf);
        }

        return 1;
    }
	// 3. 当使用完编译好的正则表达式后，或者需要重新编译其他正则表达式时，一定要使用这个函数清空该变量。
	regfree(reg);
    printf("%s 是一个合法的邮件，欢迎来半圆.\n", email);
    return 0;
}