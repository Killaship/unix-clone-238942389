cd kernel
nasm -f elf32 kernel.asm -o kasm.o
cd -
gcc -Wall -Wextra -fno-stack-protector -m32 -c kernel/kernel.c -o kc.o -ffreestanding

ld -m elf_i386 -T link.ld -o kernel.elf kernel/kasm.o kc.o -format binary initrd.o

mkdir -p iso/boot/grub
cp kernel.elf iso/boot/kernel.elf
cp grub.cfg iso/boot/grub/grub.cfg
grub-mkrescue -o os.iso iso
