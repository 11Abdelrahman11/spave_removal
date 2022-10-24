#include <iostream>

/*
Write a program that reads in a sentence of up to 100 characters and outputs the sentence with spacing
corrected and with letters corrected for capitalization. In other words, in the output sentence, all strings
of two or more blanks should be compressed to a single blank. The sentence should start with an
uppercase letter but should contain no other uppercase letters. Do not worry about proper names; if their
first letters are changed to lowercase, that is acceptable.
Treat a line break as if it were a blank, in the sense that a line break and any number of blanks are
compressed to a single blank. Assume that the sentence ends with a period and contains no other
periods.
*/

using namespace std;

int main()
{
        char sentence[100];
	char newSentence[100] = {{0}};
	cout << "Enter a sentence: ";
	cin.getline(sentence, 100);
	int i = 0;
	int j = 0;
	while (sentence[i] != '\0')
	{
		if (sentence[i] == ' ' && sentence[i + 1] == ' ')
		{
			i++;
		}
		else if (sentence[i] == ' ' && sentence[i + 1] != ' '){
			newSentence[j] = sentence[i];
			newSentence[j + 1] += tolower(sentence[i + 1]);
			j += 2;
			i += 2;
		}
		else if (sentence[i] != ' ' && sentence[i + 1] != ' ') {
			if (i == 0) {
				newSentence[j] += toupper(sentence[i]);
			}
			else {
				newSentence[j] += tolower(sentence[i]);
			}
			j++;
			i++;
		}
		else if (sentence[i] != ' ' && sentence[i + 1] == ' ') {
			newSentence[j] += tolower(sentence[i]);
			j++;
			i++;
		}
		else if (sentence[i] == '.' && sentence[i + 1] == '\0') {
			newSentence[j] = sentence[i];
			j++;
			i++;
		}
		else if (sentence[i] == '.' && sentence[i + 1] != ' ') {
			newSentence[j] = toupper(sentence[i]);
			j++;
			i++;
		}
}
	cout << newSentence << endl;
	return 0;
}

