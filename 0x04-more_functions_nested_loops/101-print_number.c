void _putchar(char c) {
    write(1, &c, 1);
}

/* Forward declaration of print_integer */
void print_integer(int m);

void print_number(int n) {
    if (n == 0)
        _putchar('0');
    else if (n < 0) {
        _putchar('-');
        print_integer(-n);
    } else {
        print_integer(n);
    }
}

void print_integer(int m) {
    int i = 1000000000;

    for (; i >= 1; i /= 10) {
        if (m / i != 0) {
            _putchar((m / i) % 10 + '0');
        }
    }
}
