#include <stdio.h>

int gcd(int m, int n)
{
    return m ? gcd(n % m, m) : n;
}

int is_odd(int a)
{
    return a & 1;
}

int main(int argc, char *argv[])
{
    int m, n, g, nhits, mhits;
    char pocket;

    while (scanf("%d %d", &m, &n) != EOF) {
	g = gcd(m, n);
	nhits = n / g;
	mhits = m / g;
	if (!is_odd(nhits) && !is_odd(mhits)) {
	    pocket = 'A';
	} else if (is_odd(nhits) && !is_odd(mhits)) {
	    pocket = 'B';
	} else if (is_odd(nhits) && is_odd(mhits)) {
	    pocket = 'C';
	} else {
	    pocket = 'D';
	}
	printf("%c %d\n", pocket, nhits + mhits - 2);
    }
    
    return 0;
}
