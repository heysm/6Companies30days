#include <vector>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string> words) {
  // Write your code here.
	vector <pair <string,int>> wordIndex;
	for( int i = 0 ; i < words.size() ; i++ ){
		wordIndex.push_back({words[i],i});
	}
	
	for( auto & word: wordIndex ) {
		sort(word.first.begin() , word.first.end());
	}
	
	sort( wordIndex.begin(), wordIndex.end());
	
	int i = 0 ;
	
	vector < vector <string>> ret;
	
	while( i < wordIndex.size() ) {
		vector <string> temp;
		temp.push_back( words[wordIndex[i].second]  );
		
		i++;
		
		while( i < wordIndex.size() and wordIndex[i-1].first == wordIndex[i].first ) {
			temp.push_back(words[wordIndex[i].second] );
			i++;
		}
		
		ret.push_back(temp);
	}
	
	
  return ret;
}
