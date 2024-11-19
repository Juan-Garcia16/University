#include <stdio.h>

// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    // Definir los colores ANSI
    const char* black = "\033[30m";
    const char* orange = "\033[38;5;214m"; // Naranja
    const char* blue = "\033[34m";
    const char* white = "\033[37m";
    const char* yellow = "\033[33m";
    const char* reset = "\033[0m"; // Resetear color a predeterminado

    // Recrear la imagen usando caracteres
    // Cada línea corresponde a una fila de la imagen
    setColor(black);
    printf("        ****       \n");

    printf("       *");
    setColor(orange);
    printf("****");
    setColor(black);
    printf("*");

    setColor(black);
    printf("       *");
    setColor(orange);
    printf("******")



    setColor(blue);
    printf("     *  *   *  *    \n");

    setColor(black);
    printf("      *     *     \n");

    setColor(orange);
    printf("   **     **  \n");
    printf("  *               * \n");

    setColor(white);
    printf(" *   *     *   *\n");

    setColor(orange);
    printf(" *   *         *   *\n");
    printf("  *   *       *   * \n");

    setColor(yellow);
    printf("   *         *  \n");

    setColor(orange);
    printf("    *           *   \n");

    // Resetear el color al final
    setColor(reset);

    return 0;
}