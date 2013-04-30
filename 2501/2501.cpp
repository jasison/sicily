#include<iostream>
#include<algorithm>
using namespace std ;

const int M = 9901 ;
int expMod(int p , int q , int t); // ¹Ø¼üÖ¤Ã÷ £ºa = b * c 
                                   // a % M = (b % M) * (c % M) % M

int main(){

    int i , j , k , n , t ;
    int sum = 0 ;

    cin >> n >> k ;

    for(i = 1 ; i <= k ; i++)
    {
        t = expMod(n , i , M) ;
        sum = sum + t ;

        if(sum >= M)
            sum = sum % M ;
    }

    cout << (sum % M) << endl;


    return 0 ;
}

int expMod(int p , int q , int t)
{
	if(q == 0)
		return 1 % t ;
	else if(q ==1)
		return p % t;
	else
	{
		int a , b ;
		if(q % 2 == 0)
		{
			a = expMod(p , q / 2 , t) ;
			a = a * a % t ;
		}
		else
		{
			a = expMod(p , (q + 1) /2 , t) ;
			b = expMod(p , (q - 1) /2 , t) ;
			a = a * b % t ;
		}

		return a ;
	}
}

