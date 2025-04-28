#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void BFS(const map<char,vector<char>> G,char s) {
	vector<char> aTraiter = {s};
	vector<char> dejaVu = {s};

	while(aTraiter.size() > 0) {
		char si = aTraiter[0];
		aTraiter.erase(aTraiter.begin());

		for(size_t i = 0; i < G.at(si).size(); i++) {
			if(find(dejaVu.begin(),dejaVu.end(),G.at(si)[i]) == dejaVu.end()) {
				dejaVu.push_back(G.at(si)[i]);
				aTraiter.push_back(G.at(si)[i]);
			}
		}
	}

	cout << "BFS: [";
	for(auto v : dejaVu) {
		cout << " " << v << " ";
	}
	cout << "]" << endl;
}

void DFS(const map<char,vector<char>> G,char s) {
	vector<char> aTraiter = {s};
	vector<char> dejaVu = {s};

	while(aTraiter.size() > 0) {
		char si = aTraiter[aTraiter.size() - 1];
		aTraiter.erase(aTraiter.end() - 1);

		for(size_t i = 0; i < G.at(si).size(); i++) {
			if(find(dejaVu.begin(),dejaVu.end(),G.at(si)[i]) == dejaVu.end()) {
				dejaVu.push_back(G.at(si)[i]);
				aTraiter.push_back(G.at(si)[i]);
			}
		}
	}

	cout << "DFS: [";
	for(auto v : dejaVu) {
		cout << " " << v << " ";
	}
	cout << "]" << endl;
}

int main() {
	const map<char,vector<char>> G = {
		{'a',{'b','g'}},
		{'b',{'c','e','g'}},
        {'c',{'d','f','e'}},
        {'d',{'c'}},
        {'e',{'c','b','g','h','i','f'}},
        {'f',{'c','e','i'}},
        {'g',{'a','b','e','h'}},
        {'h',{'e','g','i'}},
        {'i',{'f','e','h'}}
	};

	BFS(G,'a');
	DFS(G,'a');

	return 0;
}
