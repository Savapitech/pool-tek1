#include <SFML/Graphics.h>
#include <stdlib.h>
#include "day13.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *fb = malloc(
        sizeof *fb + (width * height) * sizeof *fb->framebuffer
    );

    if (fb == NULL)
        return NULL;
    fb->framebuffer = (sfColor *)&fb[1];
    fb->width = width;
    fb->height = height;
    for (unsigned int i = 0; i < (width * height); i++)
        fb->framebuffer[i] = sfBlack;
    return fb;
}

int main(void)
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(mode, "sugomA", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    while (sfRenderWindow_isOpen(window))
        sfRenderWindow_display(window);
    return EXIT_SUCCESS;
}
