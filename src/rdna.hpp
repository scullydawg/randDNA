#include <random>
#include <string>

using namespace std;


string randDNA(int seed, string bases, int lengths){
	
	string randomness;
	mt19937 eng1(seed);
	uniform_int_distribution<int> unifrm(0, bases.size() - 1);
	
	for(int i=0; i < lengths; i++) {
		int ordering = unifrm(eng1);
		randomness += bases[ordering];
	}
	return randomness;
}


