#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char name[30];
	cout<<"ENter any string "<<endl;
	gets(name);
	int charCount[256]={0};
	for(int i=0;name[i]!='\0';i++)
	{
		charCount[name[i]]++;
	}
	int maxCount=0;
	char maxChar;
	for(int i=0;i<256;i++)
	{
		if (charCount[i] > 0 && charCount[i] > maxCount) {
            maxChar = static_cast<char>(i);
            maxCount = charCount[i];
        }
	}
	    std::cout << "Maximum occurring character: '" << maxChar << "' with frequency: " << maxCount << std::endl;
}
