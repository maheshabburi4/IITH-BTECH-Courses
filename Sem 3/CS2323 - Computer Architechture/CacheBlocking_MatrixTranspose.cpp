#include<bits/stdc++.h>
using namespace std;


set<int> cache;

map<int, int> mp;

map<int, int> :: iterator itr;

int arrLen, blockSize, blocksInCache, cacheSize, hits = 0, misses = 0, blocksInRow, tiling, printFlag = 0;

int ind = 0, blockInd;

int** Input;

int** Transpose;

vector<pair<int, int> > accessSeqArr, accessSeqTranspose;

ofstream file;

void startRed() {        cout << "\033[1;31m";}
void endRed() { cout<<"\033[0m";}

void startBlue() {       cout << "\033[1;34m";}
void endBlue() { cout<<"\033[0m";}

void cacheState()
{
    
    if (printFlag < 2) {startBlue(); cout << "[";    }
				
	for (itr = mp.begin(); itr != mp.end(); itr++) {
		int blockIndInCache = itr -> first;
		if (blockIndInCache < arrLen * blocksInRow) {
			int i1 = blockIndInCache / blocksInRow;
			int j1 = blockIndInCache % blocksInRow;
			for (int k = 0; k < blockSize; k++) {
				file << "I" << i1 << j1 * blockSize + k << " ";
				if (printFlag < 2) {
					cout << "I" << i1 << j1 * blockSize + k << " ";
				}
			}
			file << "   ";
			if (printFlag < 2) {
				cout<< "   ";
                //cout << endl;
			}
		}
		else {
			blockIndInCache = blockIndInCache - arrLen * blocksInRow;
			int i1 = blockIndInCache / blocksInRow;
			int j1 = blockIndInCache % blocksInRow;
			for (int k = 0; k < blockSize; k++) {
				file << "T" << i1 << j1 * blockSize + k << " ";
				if (printFlag < 2) {
					cout << "T" << i1 << j1 * blockSize + k << " ";
				}
			}
			file <<"   ";
			//file << endl;
			if (printFlag < 2) {
				cout<<"   ";//cout << endl;
			}
		}
	}
	if (printFlag < 2) cout << "]";
	if (printFlag < 2) {       
        cout<<"\n";  
        endBlue();
    }
			
}

void checkAndPushToCache(int blockInd)
{
	if (cache.size() < blocksInCache) {
		if (cache.find(blockInd) == cache.end()) {
			cache.insert(blockInd);
			file << "Cache miss" << endl;
			if (printFlag < 2) {
				cout << "Cache Miss" << endl;
			}
			misses++;
		}
		else {
			file << "Cache Hit" << endl;
			if (printFlag < 2) {
				cout << "Cache Hit" << endl;
			}
			hits++;
		}
		mp[blockInd] = ind;
		ind++;
	}
	else {
		
		if (cache.find(blockInd) == cache.end()) {
			int cmp = INT_MAX;
			int blockToRemoved = -1;
			for (itr = mp.begin(); itr != mp.end(); itr++) {
				if (itr -> second < cmp) {
					cmp = itr -> second;
					blockToRemoved = itr -> first;
				}
			}

			cache.erase(blockToRemoved);
			mp.erase(blockToRemoved);
			cache.insert(blockInd);
			file << "Cache miss" << endl;
			if (printFlag < 2) {
				cout << "Cache Miss" << endl;
			}
			misses++;
		}
		else {
			file << "Cache Hit" << endl;
			if (printFlag < 2) {
				cout << "Cache Hit" << endl;
			}
			hits++;
		}
		mp[blockInd] = ind;
		ind++;
        printFlag++;
	}
}

void withoutBlocking()
{
	for (int i = 0; i < arrLen; i++) {
		for (int j = 0; j < arrLen; j++) {
            if (printFlag < 2) {startRed();
                cout<<"========== NOW executing ";
                    cout<<"Transpose["<<j<<"]["<<i<<"] = Input["<<i<<"]["<<j<<"]";
                    endRed();
                    }
			blockInd = i * blocksInRow + j / blockSize;
			file << "\nCache state before reading I" << i << j << endl;
			if (printFlag < 2) {
				cout << "\nCache state before reading I" << i << j << ": ";
			}
			cacheState();
			accessSeqArr.push_back(make_pair(i, j));
			checkAndPushToCache(blockInd);

			file << "\nCache state after reading I" << i << j << endl;
			if (printFlag < 2) {
				cout << "Cache state after reading I" << i << j << ": ";
			}
			cacheState();
            

			blockInd = (arrLen * blocksInRow) + j * blocksInRow + i / blockSize;
			file << "\nCache state before writing to T" << j << i << endl;
			if (printFlag < 2) {
				cout << "\nCache state before writing to T" << j << i << ": ";
			}
			cacheState();
			accessSeqTranspose.push_back(make_pair(j, i));
			checkAndPushToCache(blockInd);
					
			file << "\nCache state after writing to T" << j << i << endl;
			if (printFlag < 2) {
				cout << "Cache state after writing to T" << j << i << ": ";
			}
			cacheState();
            if (printFlag < 2) getchar();
			Transpose[j][i] = Input[i][j];
		}
	}

	file << "\n\nTotal Hits " << hits << endl;
	file << "Total Misses " << misses << endl;

	cout << "\n\nTotal Hits " << hits << endl;
	cout << "Total Misses " << misses << endl;
}


void withBlocking()
{
	for (int ii = 0; ii < arrLen; ii = ii + tiling) {
		for (int jj = 0; jj < arrLen; jj = jj + tiling) {
			for (int i = ii; i < ii + tiling; i++) {
				for (int j = jj; j < jj + tiling; j++) {
                    if (printFlag < 2) {startRed(); cout<<" NOW executing ";
                    cout<<"Transpose["<<j<<"]["<<i<<"] = Input["<<i<<"]["<<j<<"]"; 
                    endRed();
                    }
					blockInd = i * blocksInRow + j / blockSize;
					file << "\nCache state before reading I" << i << j << endl;
					if (printFlag < 2) {
						cout << "\nCache state before reading I" << i << j <<":";
					}
					cacheState();
					accessSeqArr.push_back(make_pair(i, j));

					checkAndPushToCache(blockInd);

					file << "\nCache state after reading I" << i << j << endl;
					if (printFlag < 2) {
						cout << "Cache state after reading I" << i << j << ":";                        
					}
					cacheState();
                    
                    //if (printFlag < 2) getchar();
                    
					blockInd = (arrLen * blocksInRow) + j * blocksInRow + i / blockSize;
					file << "\nCache state before writing to T" << j << i << endl;
					if (printFlag < 2) {
						cout << "\nCache state before writing to T" << j << i <<":";
					}
					cacheState();
					accessSeqTranspose.push_back(make_pair(j, i));

					checkAndPushToCache(blockInd);
					
					file << "\nCache state after writing to T" << j << i << endl;
					if (printFlag < 2) {
						cout << "Cache state after writing to T" << j << i << ":";
					}
					cacheState();
                    if (printFlag < 2) getchar();
					Transpose[j][i] = Input[i][j];
				}
			}
		}
	}

	file << "\n\nTotal Hits " << hits << endl;
	file << "Total Misses " << misses << endl;

	cout << "\n\nTotal Hits " << hits << endl;
	cout << "Total Misses " << misses << endl;
}


void initilize()
{
	file << "\nInitilizing random elements to both arrays\n";
	for (int i = 0; i < arrLen; i++) {
		for (int j = 0; j < arrLen; j++) {
			Input[i][j] = rand() % 10;
			Transpose[i][j] = rand () % 20;
		}
	}
}

void printArray()
{
	file << "\n\nArray : Input\n\n";
	for (int i = 0; i < arrLen; i++) {
		for (int j = 0; j < arrLen; j++) {
			file << Input[i][j] << " ";
		}
		file << endl;
	}

	file << "\n\nArray : Transpose\n\n";
	for (int i = 0; i < arrLen; i++) {
		for (int j = 0; j < arrLen; j++) {
			file << Transpose[i][j] << " ";
		}
		file << endl;
	}
}

void printAccessSequence()
{
	file << "\n\nAccess Sequence of I\n\n";
	for (int i = 0; i < accessSeqArr.size(); i++) {
		file << "I" << accessSeqArr[i].first << accessSeqArr[i].second << " ";
	}

	file << endl;

	file << "\n\nAccess Sequence of T\n\n";
	for (int i = 0; i < accessSeqTranspose.size(); i++) {
		file << "T" << accessSeqTranspose[i].first << accessSeqTranspose[i].second << " ";
	}

	file << endl;

}

int main()
{
	file.open("output.txt");

	//cin >> arrLen >> blockSize >> cacheSize >> tiling;
	arrLen = 8;
	blockSize = 2;
	cacheSize = 16;
	tiling = 4;
    cout<<"This program simulates cache tiling for matrix transpose with following parameters:\n";
    cout<<"8x8 matrices (Input and Transpose), cache blockSize = 2 integers = 8B\n";
    cout<<"cache size = 16 integers = 64B, tiling factor = 4\n";

	blocksInCache = cacheSize / blockSize;
	
	Input = new int*[arrLen];

	for(int i = 0; i < arrLen; i++) {
		Input[i] = new int[arrLen];
	}

	Transpose = new int*[arrLen];

	for(int i = 0;i < arrLen; i++) {
		Transpose[i] = new int[arrLen];
	}

	blocksInRow = arrLen / blockSize;

	file << "\n######################################## WITHOUT BLOCKING ########################################\n";
	cout << "\n######################################## WITHOUT BLOCKING ########################################\n\n";
	initilize();

	printArray();

	withoutBlocking();

	printArray();

	printAccessSequence();
	
	file << "\n######################################## WITH BLOCKING ########################################\n\n";
	cout << "\n######################################## WITH BLOCKING ########################################\n\n";

	cache.clear();

	mp.clear();

	hits = 0;

	misses = 0;

	printFlag = 0;

	accessSeqArr.clear();

	accessSeqTranspose.clear();

	initilize();

	printArray();

	withBlocking();

	printArray();

	printAccessSequence();

	file.close();

	cout << "\n\nLook at the generated output file for more information" << endl;
}
