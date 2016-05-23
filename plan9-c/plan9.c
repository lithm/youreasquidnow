/* compile with:
 * 8c plan9.c
 * 8l plan9.8
 * kill with:
 * kill 8.out | rc
 */

#include <u.h>
#include <libc.h>

void
main()
{
    char you[][3] = {"k", "squ"};
    int i;

    while (1) {
        for (i = 0; i < 2; i++) {
            print("You're a %sid now!\n", you[i]);
        }
    }
}
