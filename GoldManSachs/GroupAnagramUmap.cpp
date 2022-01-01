// time complexity -> nlogn*w 
#include <vector>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> words) {
  // Write your code here.
	unordered_map <string, vector<string> > dictionary;
	
	for( auto word : words ) {
		auto sortedWord = word;
		sort(sortedWord.begin(), sortedWord.end());
		dictionary[sortedWord].push_back(word);
	} 
	
	vector < vector <string> > ret;
	
	for( auto word : dictionary) {
		ret.push_back(word.second);
	}
	
	
  return ret;
}
