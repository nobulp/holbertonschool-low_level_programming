#include "main.h"

/**
 * _idigit - Vérifie si un caractère est une chiffre
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une chiffre, 0 sinon
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
