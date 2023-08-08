
# Compiler options used...
#	-fno-stack-protector	Disables stack cookies
#	-no-pie					Disables position independent execution (ASLR)
#	-zexecstack				Disables non-executable stack (DEP)

# Also, run the following to temporarily disable ASLR system-wide
#	sysctl -w kernel.randomize_va_space=0

all:
	gcc 1.c -o 1.bin -fno-stack-protector -no-pie -zexecstack
	gcc 2.c -o 2.bin -fno-stack-protector -no-pie -zexecstack