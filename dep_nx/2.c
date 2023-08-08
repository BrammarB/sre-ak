
#include <stdio.h>

int main() {

	char buff[16];

	gets(buff);

	return 0;

}

char binsh[] = "/bin/sh";

void easyrop() {

	__asm__(

		"syscall;"

		"mov %%rax, %%rax; ret;"
		"mov %%rax, %%rbx; ret;"
		"mov %%rax, %%rcx; ret;"
		"mov %%rax, %%rdx; ret;"
		"mov %%rax, %%rsi; ret;"
		"mov %%rax, %%rdi; ret;"
		"mov %%rax, %%rbp; ret;"
		"mov %%rax, %%rsp; ret;"

		"mov %%rbx, %%rax; ret;"
		"mov %%rbx, %%rbx; ret;"
		"mov %%rbx, %%rcx; ret;"
		"mov %%rbx, %%rdx; ret;"
		"mov %%rbx, %%rsi; ret;"
		"mov %%rbx, %%rdi; ret;"
		"mov %%rbx, %%rbp; ret;"
		"mov %%rbx, %%rsp; ret;"

		"mov %%rcx, %%rax; ret;"
		"mov %%rcx, %%rbx; ret;"
		"mov %%rcx, %%rcx; ret;"
		"mov %%rcx, %%rdx; ret;"
		"mov %%rcx, %%rsi; ret;"
		"mov %%rcx, %%rdi; ret;"
		"mov %%rcx, %%rbp; ret;"
		"mov %%rcx, %%rsp; ret;"

		"mov %%rdx, %%rax; ret;"
		"mov %%rdx, %%rbx; ret;"
		"mov %%rdx, %%rcx; ret;"
		"mov %%rdx, %%rdx; ret;"
		"mov %%rdx, %%rsi; ret;"
		"mov %%rdx, %%rdi; ret;"
		"mov %%rdx, %%rbp; ret;"
		"mov %%rdx, %%rsp; ret;"

		"mov %%rsi, %%rax; ret;"
		"mov %%rsi, %%rbx; ret;"
		"mov %%rsi, %%rcx; ret;"
		"mov %%rsi, %%rdx; ret;"
		"mov %%rsi, %%rsi; ret;"
		"mov %%rsi, %%rdi; ret;"
		"mov %%rsi, %%rbp; ret;"
		"mov %%rsi, %%rsp; ret;"

		"mov %%rdi, %%rax; ret;"
		"mov %%rdi, %%rbx; ret;"
		"mov %%rdi, %%rcx; ret;"
		"mov %%rdi, %%rdx; ret;"
		"mov %%rdi, %%rsi; ret;"
		"mov %%rdi, %%rdi; ret;"
		"mov %%rdi, %%rbp; ret;"
		"mov %%rdi, %%rsp; ret;"

		"mov %%rbp, %%rax; ret;"
		"mov %%rbp, %%rbx; ret;"
		"mov %%rbp, %%rcx; ret;"
		"mov %%rbp, %%rdx; ret;"
		"mov %%rbp, %%rsi; ret;"
		"mov %%rbp, %%rdi; ret;"
		"mov %%rbp, %%rbp; ret;"
		"mov %%rbp, %%rsp; ret;"

		"mov %%rsp, %%rax; ret;"
		"mov %%rsp, %%rbx; ret;"
		"mov %%rsp, %%rcx; ret;"
		"mov %%rsp, %%rdx; ret;"
		"mov %%rsp, %%rsi; ret;"
		"mov %%rsp, %%rdi; ret;"
		"mov %%rsp, %%rbp; ret;"
		"mov %%rsp, %%rsp; ret;"

		"inc %%rax; ret;"
		"inc %%rbx; ret;"
		"inc %%rcx; ret;"
		"inc %%rdx; ret;"
		"inc %%rsi; ret;"
		"inc %%rdi; ret;"
		"inc %%rsp; ret;"
		"inc %%rbp; ret;"

		"dec %%rax; ret;"
		"dec %%rbx; ret;"
		"dec %%rcx; ret;"
		"dec %%rdx; ret;"
		"dec %%rsi; ret;"
		"dec %%rdi; ret;"
		"dec %%rbp; ret;"
		"dec %%rsp; ret;"

		"pop %%rax; ret;"
		"pop %%rbx; ret;"
		"pop %%rcx; ret;"
		"pop %%rdx; ret;"
		"pop %%rsi; ret;"
		"pop %%rdi; ret;"
		"pop %%rbp; ret;"
		"pop %%rsp; ret;"

		"xchg %%rax, %%rax; ret;"
		"xchg %%rax, %%rbx; ret;"
		"xchg %%rax, %%rcx; ret;"
		"xchg %%rax, %%rdx; ret;"
		"xchg %%rax, %%rsi; ret;"
		"xchg %%rax, %%rdi; ret;"
		"xchg %%rax, %%rbp; ret;"
		"xchg %%rax, %%rsp; ret;"

		"xor %%rax, %%rax; ret;"
		"xor %%rbx, %%rbx; ret;"
		"xor %%rcx, %%rcx; ret;"
		"xor %%rdx, %%rdx; ret;"
		"xor %%rsi, %%rsi; ret;"
		"xor %%rdi, %%rdi; ret;"
		"xor %%rbp, %%rbp; ret;"
		"xor %%rsp, %%rsp; ret;"

		"add $2, %%rax; ret;"
		"add $4, %%rax; ret;"
		"add $8, %%rax; ret;"
		"add $16, %%rax; ret;"
		"add $32, %%rax; ret;"
		"add $64, %%rax; ret;"

		"sub $2, %%rax; ret;"
		"sub $4, %%rax; ret;"
		"sub $8, %%rax; ret;"
		"sub $16, %%rax; ret;"
		"sub $32, %%rax; ret;"
		"sub $64, %%rax; ret;"

		"add $2, %%rbx; ret;"
		"add $4, %%rbx; ret;"
		"add $8, %%rbx; ret;"
		"add $16, %%rbx; ret;"
		"add $32, %%rbx; ret;"
		"add $64, %%rbx; ret;"

		"sub $2, %%rbx; ret;"
		"sub $4, %%rbx; ret;"
		"sub $8, %%rbx; ret;"
		"sub $16, %%rbx; ret;"
		"sub $32, %%rbx; ret;"
		"sub $64, %%rbx; ret;"

		"add $2, %%rcx; ret;"
		"add $4, %%rcx; ret;"
		"add $8, %%rcx; ret;"
		"add $16, %%rcx; ret;"
		"add $32, %%rcx; ret;"
		"add $64, %%rcx; ret;"

		"sub $2, %%rcx; ret;"
		"sub $4, %%rcx; ret;"
		"sub $8, %%rcx; ret;"
		"sub $16, %%rcx; ret;"
		"sub $32, %%rcx; ret;"
		"sub $64, %%rcx; ret;"

		"add $2, %%rdx; ret;"
		"add $4, %%rdx; ret;"
		"add $8, %%rdx; ret;"
		"add $16, %%rdx; ret;"
		"add $32, %%rdx; ret;"
		"add $64, %%rdx; ret;"

		"sub $2, %%rdx; ret;"
		"sub $4, %%rdx; ret;"
		"sub $8, %%rdx; ret;"
		"sub $16, %%rdx; ret;"
		"sub $32, %%rdx; ret;"
		"sub $64, %%rdx; ret;"

		"add $2, %%rsi; ret;"
		"add $4, %%rsi; ret;"
		"add $8, %%rsi; ret;"
		"add $16, %%rsi; ret;"
		"add $32, %%rsi; ret;"
		"add $64, %%rsi; ret;"

		"sub $2, %%rsi; ret;"
		"sub $4, %%rsi; ret;"
		"sub $8, %%rsi; ret;"
		"sub $16, %%rsi; ret;"
		"sub $32, %%rsi; ret;"
		"sub $64, %%rsi; ret;"

		"add $2, %%rdi; ret;"
		"add $4, %%rdi; ret;"
		"add $8, %%rdi; ret;"
		"add $16, %%rdi; ret;"
		"add $32, %%rdi; ret;"
		"add $64, %%rdi; ret;"

		"sub $2, %%rdi; ret;"
		"sub $4, %%rdi; ret;"
		"sub $8, %%rdi; ret;"
		"sub $16, %%rdi; ret;"
		"sub $32, %%rdi; ret;"
		"sub $64, %%rdi; ret;"

		"add $2, %%rbp; ret;"
		"add $4, %%rbp; ret;"
		"add $8, %%rbp; ret;"
		"add $16, %%rbp; ret;"
		"add $32, %%rbp; ret;"
		"add $64, %%rbp; ret;"

		"sub $2, %%rbp; ret;"
		"sub $4, %%rbp; ret;"
		"sub $8, %%rbp; ret;"
		"sub $16, %%rbp; ret;"
		"sub $32, %%rbp; ret;"
		"sub $64, %%rbp; ret;"

		"add $2, %%rsp; ret;"
		"add $4, %%rsp; ret;"
		"add $8, %%rsp; ret;"
		"add $16, %%rsp; ret;"
		"add $32, %%rsp; ret;"
		"add $64, %%rsp; ret;"

		"sub $2, %%rsp; ret;"
		"sub $4, %%rsp; ret;"
		"sub $8, %%rsp; ret;"
		"sub $16, %%rsp; ret;"
		"sub $32, %%rsp; ret;"
		"sub $64, %%rsp; ret;"

		:::

	);

}
