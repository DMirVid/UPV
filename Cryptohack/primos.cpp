#include <vector>
#include <fstream>
using namespace std;
int main()
{
    ofstream salida("primos.txt");
    std::vector<long long> primes;
    primes.push_back(2);
    for(long long i=3; i < 10000000; i=i+2)
    {
        bool prime=true;
        for(long long j=0;j<primes.size() && primes[j]*primes[j] <= i;j++)
        {
            if(i % primes[j] == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) 
        {
            primes.push_back(i);
            salida << i << endl;
        }
    }

    return 0;
}