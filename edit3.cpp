#include <iostream>
#include <vector>
using namespace std; 
int main() {
    std::vector<std::vector<int>> vecOfVec = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};
	vector<vector<int>> v[3] ; 
	vector<int> temp={1,2,3} ; 
	v[0].push_back(temp ) ; 
	temp={4,5} ; 
	v[0].push_back(temp ) ; 
	temp={6,7,8,9} ; 
	v[0].push_back(temp ) ; 
    // Iterate over the vector of vectors
    for (auto it = v.begin(); it != v.end(); ++it) {
        // Iterate over each inner vector using an inner iterator
        for (auto innerIt = it->begin(); innerIt != it->end(); ++innerIt) {
            std::cout << *innerIt << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
