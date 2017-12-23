#include <iostream>
#include <fstream>
#include <string>
#include <climits>
#include <cfloat>
#include <cfenv>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

uint64_t filesInDir(string &fname_template, vector<string > &fnames)
{
    
}

uint64_t loadPrimesFromFiles(string &fname_template, vector<int64_t > &primes)
{
    vector<string > fnames;
    
    if (filesInDir(fname_template, fnames)) {
        for (int idx=0; idx<fnames.size(); idx++) {
            ifstream fin_primes(fnames[idx]);
            try {
                
            }
            catch (e) {
                
            }
        }
        
    }
    return primes.size();
}

int main(int argc, char **argv)
{
    vector<int64_t> primes;
    uint64_t max_prime;
    string argS;
    
    primes.clear();
    primes.insert(primes.end(),2);
    primes.insert(primes.end(),3);
    if (argc>1) {
        argS = argv[1];
        max_prime = (uint64_t)stoll(argS);
        if (max_prime<1) {
            max_prime = 1000000;
        }
    }
    else {
        max_prime = 1000000;
    }
    for (uint64_t num=4; num<=max_prime; num++) {
        uint64_t idx;
        for (idx=0; idx<primes.size(); idx++) {
            if ((num % primes[idx])==0) break;
        }
        if (idx >= primes.size()) {
            primes.insert(primes.end(),num);
        }
    }
    for (uint64_t idx=0; idx<primes.size(); idx++) {
        cout << primes[idx] << endl;
    }
	return 0;
}
