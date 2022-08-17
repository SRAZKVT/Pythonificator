CC="clang"
CFLAGS="-Wall -Werror"
CFILES="example.c pythonificator.c"

${CC} ${CFLAGS} -o example ${CFILES}
