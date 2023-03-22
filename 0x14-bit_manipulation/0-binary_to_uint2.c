/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to the binary number stored in a string
 *
 * Return: converted number or 0 if
 * 1) b is NULL
 * 2) there is one or more chars in the string that is not 0 or 1;
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int uint, power;

        if (!b)
                return (0);

        uint = power = 0;
        for (; b[power]; power++)
        {
                if (b[power] != '0' && b[power] != '1')
                        return (0);

                uint <<= 1;
                if (b[power] == '1')
                        uint += 1;
        }

        return (uint);
}

