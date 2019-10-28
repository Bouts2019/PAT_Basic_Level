#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	vector<string> hands;
	vector<string> eyes;
	vector<string> mouses;
	string errorInf = "Are you kidding me? @\\/@";
	for (int i = 0; i < 3; i++)
	{
		string str;
		getline(cin, str);
		int startIndex = 0;
		int leftFindIndex = str.find('[', startIndex);
		int rightFindIndex = -1;
		while (leftFindIndex != -1)
		{
			rightFindIndex = str.find(']', leftFindIndex + 1);
			if (i == 0) hands.push_back(str.substr(leftFindIndex + 1, rightFindIndex - leftFindIndex - 1));
			else if (i == 1) eyes.push_back(str.substr(leftFindIndex + 1, rightFindIndex - leftFindIndex - 1));
			else if (i == 2) mouses.push_back(str.substr(leftFindIndex + 1, rightFindIndex - leftFindIndex - 1));
			startIndex = leftFindIndex;
			leftFindIndex = str.find('[', startIndex + 1);
		}
	}
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		bool isOK = true;
		int leftHand = 0;
		cin >> leftHand;
		if (leftHand < 1 || leftHand > hands.size()) isOK = false;
		int leftEye = 0;
		cin >> leftEye;
		if (leftEye < 1 || leftEye > eyes.size()) isOK = false;
		int mouse = 0;
		cin >> mouse;
		if (mouse < 1 || mouse > mouses.size()) isOK = false; 
		int rightEye = 0;
		cin >> rightEye;
		if (rightEye < 1 || rightEye > eyes.size()) isOK = false;
		int rightHand = 0;
		cin >> rightHand;
		if (rightHand < 1 || rightHand > hands.size()) isOK = false;
		if (isOK)
			cout << hands[leftHand - 1] << "(" << eyes[leftEye - 1] << mouses[mouse - 1] << eyes[rightEye - 1] << ")" << hands[rightHand - 1];
		else
			cout << errorInf;
		if (i != N - 1) cout << endl;
	}

	return 0;
}
