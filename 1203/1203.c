#include <stdio.h>
#include <math.h>
#include <string.h>

long long mul(long long left, long long right, long long power)
{
	long long result;

	result = 0;
	while (left >= 1) {
		if (left & 1) {
			result += right;
		}
		right <<= 1;
		if (right > power) {
			right %= power;
		}
		left >>= 1;
	}
	if (result > power) {
		result %= power;
	}
	return result;
}

long long cube(long long base, long long power)
{
	return mul(mul(base, base, power), base, power);
}
	
int main(int argc, char *argv[])
{
	int c, len, i;
	long long result, rem, power, step;
	char str[11];

	scanf("%d", &c);
	while (c--) {
		scanf("%s", str);
		len = strlen(str);
		result = rem = str[len - 1] - '0';
		if (result == 3) {
			result = 7;
		} else if (result == 7) {
			result = 3;
		}
		power = 10;
		for (i = len - 2; i >= 0; i--) {
			rem += power * (str[i] - '0');
			step = power;
			power *= 10;
			if (len == 10 && i == 0) {
				while (cube(result, power) != rem) {
					result += step;
				}
				break;
			}
			while (((((result * result) % power) * result) % power) != rem) {
				result += step;
			}
		}
		printf("%lld\n", result);
	}
	
	return 0;
}
